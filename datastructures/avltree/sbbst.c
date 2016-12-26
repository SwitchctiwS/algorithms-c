#include "main.h"

void insert(Node_t *root, int data) {
    Node_t *current = malloc(sizeof *current);
    current = root;

    while (true) {
        if (data < current->data) {
            if (current->left == NULL) {
                current->left = create_node(data);
                return;
            } else {
                current = current->left;
            }
        } else {
            if (current->right == NULL) {
                current->right = create_node(data);
                return;
            } else {
                current = current->right;
            }
        }
    }
}

Node_t* create_node(int data) {
    Node_t *node = malloc(sizeof *node);
    node->left = NULL;
    node->right = NULL;
    node->data = data;

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
