### Documenting C++ Source Code

A useful approach to providing documentation for your software product is to integrate text into the source code.  In-source documentation enables a tool to produce documentation from the text you provide and the structure of the code itself, leading to a rich, navigable collection of online documentation.

#### Doxygen
A popular documentation tool for C++ is [Doxygen](http://www.doxygen.nl/index.html).  Doxygen is similar to JavaDoc, supporting special markup embedded in standard comment text that, when processed by the Doxygen tool, results in HTML, RTF (MS-Word), PostScript, hyperlinked PDF, compressed HTML, or Unix man pages.  Doxygen also converts LaTeX markup to math equations and can generate a variety of UML diagrams from the class structure and hierarchy of C++ code.

In addition to providing easy-to-navigate documentation for your commented source code, Doxygen can be used on undocumented code to help you understand the nature of any collection of C++ software.

Doxygen support many other languages, including Java, C, Objective-C, C#, PHP, Python and Fortran.

#### Doxygen usage

Doxygen is available on our HPC systems (walbert).  Executing the command ```doxygen --help``` will get you started. 

#### Doxygen example

Doxygen is used extensively in the [Trilinos Project](https://trilinos.github.io).  Here is one example of a source header file and its generated Doxygen output:

- [Epetra_CrsMatrix.h](https://github.com/trilinos/Trilinos/blob/master/packages/epetra/src/Epetra_CrsMatrix.h) - A C++ header file for the sparse matrix class used in the Epetra data services package in Trilinos.
- [Epetra_CrsMatrix Doxygen page](https://trilinos.org/docs/dev/packages/epetra/doc/html/classEpetra__CrsMatrix.html) - Doxygen-generated HTML output. 

