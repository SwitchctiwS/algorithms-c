all:
	cd main; make
	cd input; make
	cd queue; make
	cd stack; make
	gcc main/main.o queue/queue.o stack/stack.o input/input.o -o stackqueue.exe

clean:
	cd main; make clean
	cd input; make clean
	cd queue; make clean
	cd stack; make clean
	rm stackqueue.exe
