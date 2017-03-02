#include "main.h"

int main() {
    Node *root = malloc(sizeof *root);
    root->data = 4;
    root->left = NULL;
    root->right = NULL;

    insert(root, 7);
    insert(root, 9);
    insert(root, 3);
    insert(root, 5);
    printf("%d ", (search(root, 9) != NULL) ? search(root, 9)->data : -1);
    printf("\n");
    preorder_traversal(root);
    printf("\n");

    printf("Delete 4: ");
    delete(root, 4);
    preorder_traversal(root);
    printf("\n");

    return 0;
}
