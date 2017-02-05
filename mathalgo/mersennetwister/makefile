all:
	cd ms; make
	gcc -c main.c
	gcc main.o ms/ms.o -o main.exe

clean:
	cd ms; make clean
	rm main.exe main.o
