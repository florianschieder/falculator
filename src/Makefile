SOURCES = falculator.cpp

libfalculator.so: ${SOURCES}
	mkdir -p ../bin
	g++ -shared -fpic -o ../bin/$@ ${SOURCES}

install:
	cp libfalculator.so /usr/lib/libfalculator.so

uninstall:
	rm -f /usr/lib/libfalculator.so

clean:
	rm -f *.so
