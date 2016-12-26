#include <stdint.h>
#include <stdio.h>
#include <time.h>

void Initialize(const uint32_t seed);
static void Twist(void);
uint32_t ExtractU32(void);
