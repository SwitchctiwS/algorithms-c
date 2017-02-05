#include "main.h"

#define ARRLEN 11

int main(int argc, char* argv[]) {
	int i;
	int* arr = malloc(ARRLEN * sizeof(*arr));
	arr[0] = 5; 
	arr[1] = 3;
	arr[2] = 3;
	arr[3] = 1;
	arr[4] = 7;
	arr[5] = 0;
	arr[6] = 9;
	arr[7] = 6;
	arr[8] = 7;
	arr[9] = 4;
	arr[10] = 100;

	printf("Before:\t");
	for (i = 0; i < ARRLEN; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	heapsort(arr, ARRLEN);
	
	printf("After:\t");
	for (i = 0; i < ARRLEN; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}