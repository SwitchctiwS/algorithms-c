all:
	gcc -c main.c
	cd xorswap; make
	gcc xorswap/xorswap.o main.o -o xorswap.exe

clean:
	rm main.o xorswap.exe
	cd xorswap; make clean
