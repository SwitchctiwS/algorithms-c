all:
	cd main; make
	cd ms; make
	gcc main/main.o ms/ms.o -o main.exe

clean:
	rm main.exe
	cd main; make clean
	cd ms; make clean
