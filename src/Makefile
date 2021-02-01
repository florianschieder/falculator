SOURCES = cache.cpp number.cpp

libfalculator.so: ${SOURCES}
	mkdir -p ../bin
	g++ -shared -fpic -I../include -o ../bin/$@ ${SOURCES}

install:
	cp ../bin/libfalculator.so /usr/lib/libfalculator.so

uninstall:
	rm -f /usr/lib/libfalculator.so

clean:
	rm -f *.so
