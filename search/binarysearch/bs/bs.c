#include "./bs.h"

int binary_search(int *arr, int key, int min_index, int max_index) {
    int middle_index;

    min_index--;
    max_index++;

    while (min_index + 1 != max_index) {
        middle_index = (min_index + max_index) / 2;

        if (key > arr[middle_index]) {
            min_index = middle_index;
        } else if (key < arr[middle_index]) {
            max_index = middle_index;
        } else {
            return middle_index;
        }
    }

    return -1;
}
