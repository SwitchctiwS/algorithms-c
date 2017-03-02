#include "./main.h"

const int length = 10;
const int key = -12;

int main(int argc, char **argv) {
    int i;
    int *arr = malloc(length * sizeof *arr);

    for (i = 0; i < length; i++) {
        arr[i] = i;
    }

    print_array(arr, length);
    printf("%d\n", binary_search(arr, key, 0, length - 1));

    return 0;
}

void print_array(int *arr, int length) {
    int i;

    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
