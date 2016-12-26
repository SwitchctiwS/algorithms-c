#include "../../main/inc/main.h"

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

void delete(Node_t *root, int data) {
    // TODO: make this actually work
    Node_t *current = malloc(sizeof *current);
    current = root;

    while (current->data != data ) {
        if (data < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    free(current);
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
