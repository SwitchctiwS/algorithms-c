#include "main.h"

#define MAX_ARR_LEN 100
#define BUFFER 10

int main(int argc, char* argv[]) {
	int i;
	int arr_len;
	char* temp_str = malloc(BUFFER * sizeof(*temp_str));

	// get length of array
	printf("Array length: ");
	fgets(temp_str, BUFFER, stdin);
	arr_len = atoi(temp_str);

	// declare arr
	int* arr = malloc(arr_len * sizeof(*arr));

	// get elements of arr
	for (i = 0; i < arr_len; i++) {
		printf("Enter element %d: ", i);
		fgets(temp_str, BUFFER, stdin);
		arr[i] = atoi(temp_str);
	}

	// print pre-sorted arr
	printf("Before:\t");
	for (i = 0; i < arr_len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// sort arr
	heapsort(arr, arr_len);

	// print sorted arr	
	printf("After:\t");
	for (i = 0; i < arr_len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}