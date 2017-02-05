all:
	cd is; make
	gcc -c main.c
	gcc main.o is/is.o -o is.exe

clean:
	cd is; make clean
	rm main.o is.exe
