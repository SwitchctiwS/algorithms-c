// Includes:
#ifndef NODE_H
	#define NODE_H
	#include "./heap-node/inc/heap-node.h"
#endif

// Function prototypes:
/* Inserts node into heap
Params:
	root: Root node of the heap
	data: Data to insert*/
void insert(Node* root, int data);

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
