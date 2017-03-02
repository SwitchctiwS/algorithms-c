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

void push(Node *top, int data);
int pop(Node *top);
int peek_top(Node *top);
void print_top_to_bottom(Node *top);
