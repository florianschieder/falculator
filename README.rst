==========
falculator
==========

falculator aims to be a rapidly fast C++ calculation / mathematical library.

How to develop
--------------

Contributions are very welcome. Prerequisites for development:

  - clang_format  (via package manager)
  - cxxtest       (via package manager)
  - g++           (via package manager)
  - python3       (via package manager)
  - rstcheck      (via python3-pip)

Feel free to use and editor or IDE of your choice. Whatever you use to develop
(QtCreator, NetBeans, Vi(m), Emacs, ...), please also feel free to add specific
project or swap files to the `.gitignore` file. Thank you!

How to build for development (assuming Debian or its derivates):
  `make debug && sudo make install && make test`

Guidelines
----------

When writing new, refactoring old functionality or fixing bugs, please do not
forget to

  - add / update test cases to ensure your code is working
  - run the tests (`make test`)
  - apply the style guide (run `clang-format -i [files]`)


How to install
--------------
Assuming Debian or its derivates, execute

  - `make release` to build falculator,
  - `sudo make install` to install libfalculator.so to /usr/lib.

Run `make clean` to clean object and binary files.
