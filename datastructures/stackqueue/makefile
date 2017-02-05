all:
	cd input; make
	cd continue-prompt; make
	cd queue; make
	cd stack; make
	gcc -c main.c
	gcc input/input.o continue-prompt/continue-prompt.o queue/queue.o stack/stack.o main.o -o stackqueue.exe

clean:
	cd input; make clean
	cd continue-prompt; make clean
	cd queue; make clean
	cd stack; make clean
	rm main.o stackqueue.exe
