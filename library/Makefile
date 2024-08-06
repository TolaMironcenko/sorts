CXX=g++
CXXFLAGS=-Wall -std=c++20
SOURCES=main.cpp
TARGET=bin/sorts
LIBRARYTARGET=lib/libsorts.so
LIBRARYSOURCES=lib/Sorts.cpp

default: all

all: build

build:
	@if [ ! -d bin ]; then \
		mkdir bin; \
	fi
	$(CXX) -o $(TARGET) $(SOURCES) $(CXXFLAGS) -l sorts

shared:
	$(CXX) -shared -o $(LIBRARYTARGET) $(LIBRARYSOURCES) $(CXXFLAGS)

clean:
	@rm -v $(TARGET)
	@rm -v $(LIBRARYTARGET)
	
install:
	install lib/libsorts.so /usr/lib
	install include/Sorts.h /usr/include

uninstall:
	@rm -v /usr/lib/libsorts.so
	@rm -v /usr/include/Sorts.h
