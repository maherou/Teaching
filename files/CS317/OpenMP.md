## Using OpenMP for Parallel Execution

### Goal:

Develop a thread-parallel version of your Solitaire program using OpenMP.

### Assignment details:

We will use the industry standard OpenMP environment that augments the C, C++ and Fortran languages with the ability to execute code on multi-core processors.  OpenMP provides special functions and markup (pragmas) that enable a programmer to specify that standard loops and functions should be executed in parallel.

We will use OpenMP to enable parallel execution of our Solitaire simulator, greatly improving execution time when functioning properly.  We will use the CSBSJU Linux system ``walbert.cs.csbsju.edu`` for executing the program.

### Resources:
- [This set of slides](https://maherou.github.io/files/CS317/BriefOpenMP.pdf) shows a very simple OpenMP-enabled program to compute the integral of 4/(1+x*x) on the interval 0 to 1.
- [This version](https://maherou.github.io/files/CS317/mypi_omp.cpp) [(see here for a pretty-print html format)](https://maherou.github.io/files/CS317/mypi_omp.cpp.html) of our Pi approximation code uses a slightly more sophisticated approach to partitioning work for parallel execution.  Consider this code as a template for creating the parallel version of Solitaire.
- OpenMP examples and documentation are widely available.  As with most detailed programming questions, the web search bar (which will usually bring you to StackOverflow) is your best resource.
