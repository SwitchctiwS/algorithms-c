#include "../../main.h"

/* Builds a max heap
Params:
	arr: Array to build heap from
	arrlen: Length of arr */
void max_heap(int* arr, int arrlen) {
	int i;

	for (i = (arrlen / 2 - 1); i > -1; i--) {
		heapify(arr, i, arrlen);
	}
}

/* Heapifies an array
Params:
	arr: Array to build heap from
	i: Index of root node
	arrlen: Length of arr */
void heapify(int* arr, int i, int arrlen) {
	int* root = &arr[i];
	int* left, *right;
	int left_index = 2 * i + 1, right_index = 2 * i + 2; 

	// If the left/right index is beyond arrlen, the array is out of bounds.
	// This means that there isn't a left/right node.
	if (left_index < arrlen) {
		left = &arr[2 * i + 1];
	} else {
		left = NULL;
	}

	if (right_index < arrlen) {
		right = &arr[2 * i + 2];
	} else {
		right = NULL;
	}

	// Swaps the greatest node with the root then recursively heapifies down tree.
	// This make all subtrees of new root node heaps themselves.
	if (left != NULL && right != NULL) {
		if (*left > *root || *right > *root) {
			if (*left > *right) {
				swap(left, root);
				heapify(arr, left_index, arrlen);
			} else { 
				swap(right, root);
				heapify(arr, right_index, arrlen);
			}
		}
	} else if (left != NULL) {
		if (*left > *root) {
			swap(left, root); // No need to recurse because already a leaf node
		}
	} else {
		return; // Reached leaves
	}
}

/* Swaps two elements in an array
Params:
	a: Pointer to first element
	b: Pointer to second element */
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}