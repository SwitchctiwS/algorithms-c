#include "./xorswap.h"

void xorswap(int* a, int* b) {
	// XOR swap algorithm:
	// x := x XOR y
	// y := y XOR x
	// x := x XOR y

	// May need to check if x != y because the operation might cause a 0 result
	// However, from Wikipedia: "In most practical scenarios, the trivial swap algorithm using a temporary register is more efficient."
	*a = *a ^ *b;
	*b = *b ^ *a;
	*a = *a ^ *b;
}
	
