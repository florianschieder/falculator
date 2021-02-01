==========
falculator
==========

falculator is a rapidly fast C++ calculation / mathematical library.

How to develop
--------------

Prerequisites for development:

  - clang_format  (via package manager)
  - cxxtest       (via package manager)
  - g++           (via package manager)
  - python3       (via package manager)
  - rstcheck      (via python3-pip)


Guidelines
----------

When writing new functionality, do not forget to

  - add test cases to ensure your code is working properly
  - apply the style guide (run `clang-format -i [files]`)


How to compile
--------------
Assuming a clean working directory, execute

  `make` to build falculator,
  `sudo make install` to install libfalculator.so to /usr/lib,
  and `make examples` to build the examples.

Run `make clean` to clean object and binary files.
