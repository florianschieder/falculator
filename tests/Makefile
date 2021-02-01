TESTS = test_cache.h test_number.h

tests.out: ${TESTS}
	cxxtestgen --abort-on-fail --have-eh --xunit-printer -o runner.cpp ${TESTS}
	g++ -g -I../include -lfalculator -I/usr/include/cxxtest ${TESTS} runner.cpp -o $@
