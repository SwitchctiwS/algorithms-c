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
	#include "../node/node.h"
#endif

// Enums:
enum NodePosition {LEFT, RIGHT};

// Function Prototypes:
void insert(Node *root, int data);
Node* create_node(int data);
void delete(Node *root, int data);
void insert_node(Node* root, Node* node);
void preorder_traversal(Node *root);
Node* search(Node *root, int data);
