#include "../inc/bst.h"

enum NodePosition {LEFT, RIGHT};

void insert(Node_t *root, int data) {
	Node_t *current = malloc(sizeof *current);
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

Node_t* search(Node_t *root, int data) {
	Node_t* current = malloc(sizeof *current);
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

// BUG: does not work (especially for root node)
// Removal with two children is flawed: look up real solution
void delete(Node_t* root, int key) {
	Node_t* current = malloc(sizeof(*current));
	Node_t* parent = malloc(sizeof(*parent));
	Node_t* min = malloc()
	enum NodePosition key_position;
	
	current = root;
	while (current->data != key) {
		if (current == NULL) {
			return;
		}

		if (current->data > key) {
			if (current->left != NULL) {
				parent = current;
				current = current->left;
				key_position = LEFT;
			}
		} else if (current->data < key) {
			if (current->right != NULL) {
				parent = current;
				current = current->right;
				key_position = RIGHT;
			}
		}
	}

	if (current->left != NULL && current->right != NULL) {
		
	} else if (current->left != NULL) {
		current->data = current->left->data;
		current->left = NULL;
		free(current->left);
	} else if (current->right != NULL) {
		current->data = current->right->data;
		current->right = NULL;
		free(current->right);
	} else {
		if (key_position = LEFT) {
			parent->left = NULL;
		} else {
			parent->right = NULL;
		}
		free(current);
	}
}

void insert_node(Node_t* root, Node_t* node) {
	Node_t *current = malloc(sizeof(*current));
	bool exit_flag;
	current = root;

	exit_flag = false;
	while (!exit_flag) {
		if (node->data < current->data) {
			if (current->left == NULL) {
				current->left = node;
				exit_flag = true;
			} else {
				current = current->left;
			}
		} else {
			if (current->right == NULL) {
				current->right = node;
				exit_flag = true;
			} else {
				current = current->right;
			}
		}
	}
}

Node_t* create_node(int data) {
	Node_t *node = malloc(sizeof *node);
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}

void preorder_traversal(Node_t *root) {
	printf("%d ", root->data);

	if (root->left != NULL) {
		preorder_traversal(root->left);
	}

	if (root->right != NULL) {
		preorder_traversal(root->right);
	}
}
