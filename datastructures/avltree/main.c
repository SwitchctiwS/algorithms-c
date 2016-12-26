#include "main.h"

int main(int argc, char** argv) {
    Node_t *root = create_node(7);
    insert(root, 5);
    insert(root, 3);
    insert(root, 8);
    insert(root, 1);
    insert(root, 2);
    insert(root, 9);
    insert(root, 6);
    insert(root, 4);
    insert(root, 0);

    preorder_traversal(root);
}
