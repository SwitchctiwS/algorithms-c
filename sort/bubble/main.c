#include <stdio.h>
#include <stdbool.h>

void bubblesort(int[], int);
void swap(int[], int, int);
void display(int[], int);

int main() {
    int arr[] = {3, 5, 1, 7, 5, 7, 1, 4, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Length of array: %d\n", n);
    printf("\n");

    display(arr, n);

    bubblesort(arr, n);

    printf("\n");
    display(arr, n);

    return 0;
}

void bubblesort(int arr[], int n) {
    int i, j;
    bool swapped;

    for (i = n - 1; i > 1; i--) {
        swapped = false;

        for (j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr, j, j + 1);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void swap(int arr[], int a, int b) {
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void display(int arr[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}
