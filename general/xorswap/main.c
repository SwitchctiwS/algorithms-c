#include <stdio.h>
#include <stdlib.h>
#include "./xorswap/xorswap.h"

int main(int argc, char **argv) {
	int a = 99;
	int b = 0;

	printf("before:\n\ta: %d, b: %d\n", a, b);
	xorswap(&a, &b);
	printf("after:\n\ta: %d, b: %d\n", a, b);

	return 0;
}
