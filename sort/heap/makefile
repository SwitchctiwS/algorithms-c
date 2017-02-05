all:
	cd heapsort; make
	cd heap; make
	gcc -c main.c
	gcc -o heapsort.exe main.o heap/heap.o heapsort/heapsort.o

clean:
	rm main.o heapsort.exe
	cd heapsort; make clean
	cd heap; make clean
	
