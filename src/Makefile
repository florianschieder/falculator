SOURCES = falculator.cpp

libfalculator.so: ${SOURCES}
	g++ -shared -fpic -o $@ ${SOURCES}

install:
	cp libfalculator.so /usr/lib/libfalculator.so

uninstall:
	rm -f /usr/lib/libfalculator.so

clean:
	rm -f *.so
