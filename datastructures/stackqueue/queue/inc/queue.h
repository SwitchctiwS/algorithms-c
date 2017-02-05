#ifndef STDIO_H
	#define STDIO_H
	#include <stdio.h>
#endif

#ifndef STDLIB_H
	#define STDLIB_H
	#include <stdlib.h>
#endif

#ifndef NODE_H
	#define NODE_H
	#include "../../node/inc/node.h"
#endif

void enqueue(Node_t *front, Node_t *back, int data);
int dequeue(Node_t *front, Node_t *back);
int peek_front(Node_t *front);
void print_front_to_back(Node_t *front);
