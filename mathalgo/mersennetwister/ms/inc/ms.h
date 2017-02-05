#ifndef STDINT_H
	#define STDINT_H
	#include <stdint.h>
#endif

#ifndef TIME_H
	#define TIME_H
	#include <time.h>
#endif

void Initialize(const uint32_t  seed);
static void Twist();
uint32_t ExtractU32();
