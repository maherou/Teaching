
### A Brief Overview of C++ Execution Timing

#### Introduction
Making code more efficient requires measuring the time required to complete execution of a given phase or set of functions.  Someone who is just learning C++ may be surprised by the wide variety of timing methods available, and the relatively recent emergence of a standard for timing C++ code.

#### Simple Best Practices for Timing Code
In the early decades of computing, execution of a given set of instructions was quite predictable, in fact a well-informed programmer could count the number of clock cycle required to execute a sequence of instructions without running the code.  Presently, computer designs are very complicated and each processor is simultaneously executing a number of instructions, waiting on the delivery of data or servicing an interrupt.  Furthermore, each processor is part of an ecosystem where it shares and competes for resources with other processors.

Because of this complicated environment, good timing practices require repeated execution of a code segment and reporting of statistical results such as mean and standard deviation.  Further insight can be had by looking at a timing histogram, since using an average could obscure the fact that there may be two or more common observed execution times that highlight variations in the state of the system from one timing event to another.

Other factors that should be accounted for are:
- The possibility that repeated execution of a code segment could benefit from data being present in the cache for the second and subsequent execution of a code segment.
- The granularity of the timer needs to be sufficiently small so that its overhead does not significantly impact timing results.  This is the performance equivalent of the [Heisenberg Uncertainy Principle](https://en.wikipedia.org/wiki/Uncertainty_principle).

A good general guide to benchmarking code is [Scientific Benchmarking of Parallel Computing Systems: Twelve ways to tell the masses when reporting performance results](https://htor.inf.ethz.ch/publications/img/hoefler-scientific-benchmarking.pdf)

#### Design principles for your timer
In general, it is best to have your own interface for using timers.  Here are a few guidelines for your interface:

- The interface should provide the timer functionality you need and nothing more.
- The interface should be very light weight:  
   - Avoid the use of runtime adapters that are intrinsically part of virtual methods or pure virtual classes.
   - If you need to support different timers for different platforms, use compile-time polymorphism with ifdefs or templates.

#### Example Timer (pre-C++11)
This simple timing function is used in the TOP500 computer system ranking benchmark:

- [mytimer.hpp](https://github.com/hpcg-benchmark/hpcg/blob/master/src/mytimer.hpp)
- [mytimer.cpp](https://github.com/hpcg-benchmark/hpcg/blob/master/src/mytimer.cpp)


#### Timing using modern C++ (C++11 or later)

The C++11 standard provides standard functionality in the chrono library.  The HPCG benchmark function could, in principle, be re-written using chrono.  Here are some resources for finding out more about chrono:

- [C++ Standard Reference](https://en.cppreference.com/w/cpp/chrono)
- [Using chrono, part 1 - video](https://www.youtube.com/watch?v=LL8wkskDlbs) 
- [Using chrono, part 2 - video](https://www.youtube.com/watch?v=RuPfDfLKY04)

#### Assignment: Add a timer to your Solitaire Game
Details:
- The timer should record and report the execution time of the performance sensitive portions of your code.  
- Timing should be reported as a statistical mean and standard deviation.
- For small code fragments (if any), investigate of there are timing spikes by providing a histogram analysis.


