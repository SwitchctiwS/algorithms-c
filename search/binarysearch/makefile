all:
	gcc main.c -c
	cd bs; make
	gcc main.o bs/bs.o -o bs.exe

clean:
	rm main.o bs.exe
	cd vs; make clean
