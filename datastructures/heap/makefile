all: main.o
	cd heap; make
	gcc -c main.c
	gcc main.o heap/heap.o -o heap.exe

clean:
	cd heap; make clean
	rm main.o heap.exe
