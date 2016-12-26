void binary_insertion_sort(int *arr, int length) {
    // TODO: actually make this work
    int i;
    int min_index, middle_index, max_index;

    for (i = 1; i < length; i++) {

    }

    min_index = -1;
    max_index = length + 1;

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
