#include "./bst.h"

void insert(Node *root, int data) {
	Node *current = malloc(sizeof *current);
	bool exit_flag;
	current = root;

	exit_flag = false;
	while (!exit_flag) {
		if (data < current->data) {
			if (current->left == NULL) {
				current->left = create_node(data);
				exit_flag = true;
			} else {
				current = current->left;
			}
		} else {
			if (current->right == NULL) {
				current->right = create_node(data);
				exit_flag = true;
			} else {
				current = current->right;
			}
		}
	}
}

Node* search(Node *root, int data) {
	Node* current = malloc(sizeof *current);
	current = root;

	while (current != NULL) {
		if (data < current->data) {
			current = current->left;
		} else if (data > current->data) {
			current = current->right;
		} else {
			return current;
		}
	}

	return NULL;
}

void delete(Node* root, int key) {
	Node* current = malloc(sizeof *current);
	Node* parent = malloc(sizeof *parent);
	Node* min = malloc(sizeof *min);
	enum NodePosition key_position;

	// Finds node that matches key.
	current = root;
	while (current->data != key) {
		if (key < current->data) {
			if (current->left != NULL) {
				// sets parent to parent node of key node
				parent = current;
				current = current->left;
				key_position = LEFT;
			} else {
				// Returns if key not found
				return;
			}
		} else if (key > current->data) {
			// Vice versa for greater than 
			if (current->right != NULL) {
				parent = current;
				current = current->right;
				key_position = RIGHT;
			} else {
				return;
			}
		} else { // key == current->data
			// This is an illegal case indicating that something went wrong.
			return;
		}

	}

	if (current->left != NULL && current->right != NULL) {
		// If node has left and right child, find the lowest node
		// of the right subtree and put it where the key node was
		min = current->right;
		if (min->left != NULL) {
			while (min->left->left != NULL) {
				min = min->left;
			}
		}

		current->data = min->left->data;
		free(min->left);
		min->left = NULL;
	} else if (current->left != NULL) {
		// If node has left child,
		// put it where key node was
		current->data = current->left->data;
		free(current->left);
		current->left = NULL;
	} else if (current->right != NULL) {
		// If node has right child,
		// put it where key node was
		current->data = current->right->data;
		free(current->right);
		current->right = NULL;
	} else {
		// If no child, delete node
		free(current);
		if (LEFT == key_position) {
			parent->left = NULL;
		} else { // RIGHT == key_position
			parent->right = NULL;
		}
	}
}

Node* create_node(int data) {
	Node *node = malloc(sizeof *node);
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}

void preorder_traversal(Node *root) {
	printf("%d ", root->data);

	if (root->left != NULL) {
		preorder_traversal(root->left);
	}

	if (root->right != NULL) {
		preorder_traversal(root->right);
	}
}
