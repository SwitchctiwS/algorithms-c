all:
	cd bst; make
	gcc -c main.c
	gcc main.o bst/bst.o -o bst.exe

clean:
	cd bst; make clean
	rm main.o bst.exe
