#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <omp.h>

void computeStartStop(int myThreadNum, int numThreads, int loopLength, int & myStart, int & myStop, bool debug = false);

template<class Scalar> void scanSum(std::vector<Scalar> & v) {

  int numThreads;
#pragma omp parallel
  numThreads = omp_get_num_threads();

  std::vector<Scalar> globalScanStarts(numThreads);

#pragma omp parallel
{
  int myThreadNum = omp_get_thread_num();
  int myStart, myStop;
  computeStartStop(myThreadNum, numThreads, v.size(), myStart, myStop, true);

  for (int j = myStart+1; j<myStop; ++j) v[j] += v[j-1];

  globalScanStarts[myThreadNum] = v[myStop-1];
} 

  for (int i=1; i<numThreads; ++i) globalScanStarts[i] += globalScanStarts[i-1];

#pragma omp parallel
{
  int myThreadNum = omp_get_thread_num();
  int myStart, myStop;
  computeStartStop(myThreadNum, numThreads, v.size(), myStart, myStop, true);

  if (myThreadNum>0) {  // Thread 0 does nothing
     Scalar offset = globalScanStarts[myThreadNum-1];
     for (int j = myStart; j<myStop; ++j) v[j] += offset;
  }
} 

  return;
}


int main(int argc, char * argv[]) {

  if (argc!=4) {
    std::cout << "Usage: " << argv[0] << " numThreads numSamples numTrials" << std::endl;
    exit(1);
  }
  // Set variable values based on arguments
  int numThreads = atoi(argv[1]);
  int numSamples = atoi(argv[2]);
  int numTrials = atoi(argv[3]);

  std::vector<int> numInsideVector(numTrials);
  std::vector<double> myPiEstimates(numTrials);

  omp_set_num_threads(numThreads);

  double startTime = omp_get_wtime();

#pragma omp parallel
{
  int myThreadNum = omp_get_thread_num();
  int myStart, myStop;
  computeStartStop(myThreadNum, numThreads, numTrials, myStart, myStop, true);
  unsigned short xsubi[3];
  for (int j = myStart; j<myStop; ++j) {
    int numInside = 0;
    for (int k = 0; k<numSamples; ++k){
       double x = (erand48(xsubi)-.5);
       double y = (erand48(xsubi)-.5);
       double r = sqrt(x*x+y*y);
       if (r <= 0.5) numInside++;
    } 
    numInsideVector[j] = numInside;
  }
}

 double getTime = omp_get_wtime();
 double sampleTime = getTime - startTime;

scanSum<int>(numInsideVector);

 double getTime1 = omp_get_wtime();
 double scanTime = getTime1 - getTime;

#pragma omp parallel
{
  int myThreadNum = omp_get_thread_num();
  int myStart, myStop;
  computeStartStop(myThreadNum, numThreads, numTrials, myStart, myStop, true);
  for (int j = myStart; j<myStop; ++j) 
    myPiEstimates[j] = 4.0*((double) numInsideVector[j])/((double) (numSamples*(j+1)));
}

  double stopTime = omp_get_wtime();
  double computePiEstimateTime = stopTime - getTime1;
 
  std::cout << "*********************************" << std::endl;
  std::cout << "            Timing Summary       " << std::endl;
  std::cout << "*********************************" << std::endl;
  std::cout << " Total time = " << stopTime - startTime << std::endl;
  std::cout << "    Sample time   = " << sampleTime << std::endl;
  std::cout << "    Scan time     = " << scanTime << std::endl;
  std::cout << "    Pi Est time   = " << computePiEstimateTime << std::endl;

  std::cout << " #Samples   Pi Estimate" << std::endl; 
  for (int i=0; i<numTrials; ++i) std::cout << (i+1)*numSamples << " " << myPiEstimates[i] << std::endl;

  return 0;

}

void computeStartStop(int myThreadNum, int numThreads, int loopLength, int & myStart, int & myStop, bool debug) {
  int myChunkSize = loopLength/numThreads;
  int chunkRemainder = loopLength%numThreads;
  if (myThreadNum<chunkRemainder) {
    myChunkSize++; // Hand out extra iterations if needed
    myStart = myThreadNum * myChunkSize;
  }
  else {
    myStart = chunkRemainder*(myChunkSize+1) + (myThreadNum-chunkRemainder)*myChunkSize;
  }
  myStop = myStart+myChunkSize;

  if (debug)
#pragma omp critical
  {
    std::cout << "Starting up thread " << myThreadNum 
              << "  computing " << myChunkSize << " iterations: " << myStart << " through " << myStop-1 << std::endl;
  }
  return;
}
