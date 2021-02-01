release:
	make -C src/ release

debug:
	make -C src/ debug

install:
	make -C src/ install

clean:
	make -C src/ clean

test:
	make -C src/
	make -C tests/
	tests/tests.out
	python3 -m rstcheck *.rst
