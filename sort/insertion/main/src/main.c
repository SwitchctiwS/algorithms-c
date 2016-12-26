#include "../inc/main.h"

int main(int argc, char **argv) {
    int length = 10;

    int arr[] = {3, 3, 2, 0, 1, 4, 6, 9, 5, 8};

    insertion_sort(arr, length);
    print_array(arr, length);

    return 0;
}

void print_array(int *arr, int length) {
    int i;

    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
