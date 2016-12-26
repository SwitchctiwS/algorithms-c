all:
	cd main; make
	cd is; make
	gcc main/main.o is/is.o -o main.exe

clean:
	cd main; make clean
	cd is; make clean
	rm main.exe
