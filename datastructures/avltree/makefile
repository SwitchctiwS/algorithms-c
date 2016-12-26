all: main.o sbbst.o
	gcc main.o sbbst.o -o selfbalancingbst.exe

main.o: main.c
	gcc main.c -c

sbbst.o: sbbst.c
	gcc sbbst.c -c

clean:
	rm main.o sbbst.o selfbalancingbst.exe
