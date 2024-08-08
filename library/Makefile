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
	$(CXX) -o $(TARGET) $(SOURCES) $(CXXFLAGS)

shared:
	$(CXX) -shared -o $(LIBRARYTARGET) $(LIBRARYSOURCES) $(CXXFLAGS)

clean:
	@if [ -f $(TARGET) ]; then \
		rm -v $(TARGET); \
	fi
	@if [ -f $(LIBRARYTARGET) ]; then \
		rm -v $(LIBRARYTARGET); \
	fi
	
install:
	install lib/libsorts.so /usr/lib
	install include/Sorts.h /usr/include

uninstall:
	@rm -v /usr/lib/libsorts.so
	@rm -v /usr/include/Sorts.h
