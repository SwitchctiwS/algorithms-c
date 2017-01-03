all: main.o
	cd heap; make
	gcc main.o heap/heap.o -o heap.exe

main.o:
	gcc -c main.c

clean:
	cd heap; make clean
	rm main.o heap.exe
