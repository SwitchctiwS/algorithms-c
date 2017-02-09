// Includes:
#ifndef STDBOOL_H
	#define STDBOOL_H
	#include <stdbool.h>
#endif

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

// Enums:
enum NodePosition {LEFT, RIGHT};

// Function Prototypes:
void insert(Node_t *root, int data);
Node_t* create_node(int data);
void delete(Node_t *root, int data);
void insert_node(Node_t* root, Node_t* node);
void preorder_traversal(Node_t *root);
Node_t* search(Node_t *root, int data);
