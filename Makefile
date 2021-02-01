MAKE = make

falculator:
	make -C src/

install:
	make -C src/ install

clean:
	make -C src/ clean

test:
	make -C tests/
	tests/tests.out
	python3 -m rstcheck *.rst
