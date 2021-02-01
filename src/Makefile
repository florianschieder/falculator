SOURCES = cache.cpp number.cpp
FLAGS = -shared -fpic -I../include -Wall -Werror
OUT = ../bin/libfalculator.so

CUSTOM_RELEASE_FLAGS =

debug: ${SOURCES}
	mkdir -p ../bin
	g++ -g ${FLAGS} -o ${OUT} ${SOURCES}

release: ${SOURCES}
	mkdir -p ../bin
	g++ ${CUSTOM_RELEASE_FLAGS} ${FLAGS} -o ${OUT} ${SOURCES}

install:
	cp ${OUT} /usr/lib/libfalculator.so

uninstall:
	rm -f /usr/lib/libfalculator.so

clean:
	rm -f *.so
