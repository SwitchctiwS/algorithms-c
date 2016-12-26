#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

int main(int argc, char **argv) {
    int i;
    int *arr = malloc(LENGTH * sizeof arr);

    for (i = 0; i < LENGTH; i++) {
        arr[i] = i;
    }
    for (i = 0; i < LENGTH; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    // XOR swap algorithm:
    // x := x XOR y
    // y := y XOR x
    // x := x XOR y

    // May need to check if x != y because the operation might cause a 0 result
    // However, from Wikipedia: "In most practical scenarios, the trivial swap algorithm using a temporary register is more efficient."
    for (i = 0; i < LENGTH / 2; i++) {
        arr[i] = arr[i] ^ arr[LENGTH - 1 - i];
        arr[LENGTH - 1 - i] = arr[LENGTH - 1 -i] ^ arr[i];
        arr[i] = arr[i] ^ arr[LENGTH - 1 - i];
    }
    for (i = 0; i < LENGTH; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
