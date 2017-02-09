all:
	cd mt; make
	gcc -c main.c
	gcc main.o mt/mt.o -o main.exe

clean:
	cd mt; make clean
	rm main.exe main.o
