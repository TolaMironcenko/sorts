CXX=g++
CXXFLAGS=-Wall -std=c++20
SOURCES=src/main.cpp
TARGET=bin/shackersort

default: all

all: build

build:
	@if [ ! -d bin ]; then \
		mkdir bin; \
	fi
	$(CXX) -o $(TARGET) $(SOURCES) $(CXXFLAGS);

clean:
	rm -v $(TARGET)
	