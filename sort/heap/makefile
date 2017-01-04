all:
	cd heapsort; make
	gcc -c main.c
	gcc -o heapsort.exe main.o heapsort/heap.o heapsort/sort.o

clean:
	rm main.o heapsort.exe
	cd heapsort; make clean
	
