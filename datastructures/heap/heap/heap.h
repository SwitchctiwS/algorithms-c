// Includes:
#ifndef STDLIB_H
	#define STDLIB_H
	#include <stdlib.h>
#endif

// Function Prototypes:
/* Builds a max heap
Params:
	arr: Array to build heap from
	arrlen: Length of arr */
void max_heap(int* arr, int arrlen);

/* Heapifies an array
Params:
	arr: Array to build heap from
	i: Index of root node
	arrlen: Length of arr */
void heapify(int* arr, int i, int arrlen);

/* Swaps two elements in an array
Params:
	a: Pointer to first element
	b: Pointer to second element */
void swap(int* a, int* b);
