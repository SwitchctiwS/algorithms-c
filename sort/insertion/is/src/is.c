#include "../inc/is.h"

void insertion_sort(int *arr, int length) {
    int i, j;
    bool inserted;
    int current_value;

    for (i = 1; i < length; i++) {
        current_value = arr[i];
        j = i;
        inserted = false;

        while (!inserted) {
            if (current_value < arr[j - 1] && j > 0) {
                arr[j] = arr[j - 1];
                j--;
            } else {
                arr[j] = current_value;
                inserted = true;
            }
        }
    }
}
