CXX=g++
CXXFLAGS=-Wall -std=c++20
SOURCES=src/main.cpp
TARGET=bin/insertionsort

default: all

all: build

build:
	$(CXX) -o $(TARGET) $(SOURCES) $(CXXFLAGS);

clean:
	rm -v $(TARGET)
	