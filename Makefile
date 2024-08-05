CXX=g++
CXXFLAGS=-Wall -std=c++20
SOURCES=src/main.cpp
default: all

all: bubblesort combsort heapsort insertionsort mergesort quicksort selectionsort shackersort

bubblesort:
	@make -C examples/bubblesort build

combsort:
	@make -C examples/combsort build

heapsort:
	@make -C examples/heapsort build

insertionsort:
	@make -C examples/insertionsort build

mergesort:
	@make -C examples/mergesort build

quicksort:
	@make -C examples/quicksort build

selectionsort:
	@make -C examples/selectionsort build

shackersort:
	@make -C examples/shackersort build

run:
	examples/bubblesort/bin/bubblesort
	examples/combsort/bin/combsort
	examples/heapsort/bin/heapsort
	examples/insertionsort/bin/insertionsort
	examples/mergesort/bin/mergesort
	examples/quicksort/bin/quicksort
	examples/selectionsort/bin/selectionsort
	examples/shackersort/bin/shackersort

clean:
	@if [ -f examples/bubblesort/bin/bubblesort ]; then \
		printf "removed: "; \
		rm -v examples/bubblesort/bin/*; \
	fi
	@if [ -f examples/combsort/bin/combsort ]; then \
		printf "removed: "; \
		rm -v examples/combsort/bin/*; \
	fi
	@if [ -f examples/heapsort/bin/heapsort ]; then \
		printf "removed: "; \
		rm -v examples/heapsort/bin/*; \
	fi
	@if [ -f examples/insertionsort/bin/insertionsort ]; then \
		printf "removed: "; \
		rm -v examples/insertionsort/bin/*; \
	fi
	@if [ -f examples/mergesort/bin/mergesort ]; then \
		printf "removed: "; \
		rm -v examples/mergesort/bin/*; \
	fi
	@if [ -f examples/quicksort/bin/quicksort ]; then \
		printf "removed: "; \
		rm -v examples/quicksort/bin/*; \
	fi
	@if [ -f examples/selectionsort/bin/selectionsort ]; then \
		printf "removed: "; \
		rm -v examples/selectionsort/bin/*; \
	fi
	@if [ -f examples/shackersort/bin/shackersort ]; then \
		printf "removed: "; \
		rm -v examples/shackersort/bin/*; \
	fi

	