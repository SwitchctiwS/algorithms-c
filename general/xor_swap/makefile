all: main.exe

main.exe: main.o
	gcc main.o -o main.exe

main.o: main.c
	gcc main.c -c

clean:
	rm main.o main.exe
