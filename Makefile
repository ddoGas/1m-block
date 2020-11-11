all: 1m-block

1m-block: main.o quicksort.o
	g++ -o 1m-block main.o quicksort.o -lnetfilter_queue

main.o: main.cpp quicksort.h
	g++ -c -o main.o main.cpp

quicksort.o: quicksort.cpp quicksort.h
	g++ -c -o quicksort.o quicksort.cpp

clean:
	rm -f 1m-block *.o