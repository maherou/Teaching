### C++ Code Formatting

#### Introduction
In any kind of multi-person software project, reducing accidental or small-value differences in development practices is often beneficial.  One area where this is particularly true is code formatting.  C++, like most programming languages, permits a wide variety of source code formats that are still standard compliant. Placement of curly braces, spacing between arithmetic operators and alignment of code blocks are just a few examples where there is a lot of flexibility for programmers.

Consistent code formatting is a very simple and powerful way to improve the effectiveness and efficiency of a software development team, and to improve the long-term sustainability of a software code base.  The best way to introduce formatting policies and tools is at the very beginning of a project, followed by rigorous adherence to the policy at all times.

#### clang-format
clang is the C++ and C compiler for the LLVM project.  LLVM and its related compiler tools provide a community-developed open source product suite that continues to grow in value and ubiquity.  clang-format is one of the tools in this suite.  While it is part of the clang effort, clang-format can be used as a stand-alone tool.  Furthermore, it can be integrated into many IDEs and commit processes, automating the process of keeping source code compliant with team policies.

Resources:
- [clang-format reference page](https://clang.llvm.org/docs/ClangFormat.html) - Main reference page for clang-format
- [MongoDB clang-format guidance, Part 1](https://engineering.mongodb.com/post/succeeding-with-clangformat-part-1-pitfalls-and-planning)
- [MongoDB clang-format guidance, Part 2](https://engineering.mongodb.com/post/succeeding-with-clangformat-part-2-the-big-reformat)

#### Final note
While clang-format permits many customizations for the output format, it is strongly recommended that you use the tool without changing any style options.  Only after a few months of using it, should you attempt to try some customizations will help your team.  Even then, customize only what is really needed.  Customization comes with its own maintainence and non-uniformity costs, especially for developers who work across more than one project, each with its own set of customizations.

#### Assignment: Integrate the use of clang-format into your source development process.
The clang-format documentation page discusses how to integrate clang-format into your workflows.  Primary options include:
- Integrate its use into your development IDE.
- Integrate it into your git commit process.
