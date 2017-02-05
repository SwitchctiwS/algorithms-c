#include "../inc/heapsort.h"

/* Sorts array in increasing order using the heapsort algorithm
Params:
	arr: Array to be sorted
	arrlen: Length of arr*/
void heapsort(int* arr, int arrlen) {
	int i;

	for (i = arrlen; i > 1; i--) {
		max_heap(arr, i);
		swap(&arr[0], &arr[i - 1]);
	}
}
