all:
	cd bs; make
	cd main; make
	gcc main/main.o bs/bs.o -o main.exe

clean:
	cd bs; make clean
	cd main; make clean
	rm main.exe
