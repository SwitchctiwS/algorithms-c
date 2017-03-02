#include "./stack.h"

void push(Node *top, int data) {
    Node *node = malloc(sizeof *node);
    node->data = data;

    if (top->previous == NULL) {
        top->previous = node;
        node->previous = NULL;
        return;
    }

    node->previous = top->previous;
    top->previous = node;
}

int pop(Node *top) {
    if (top->previous == NULL) {
        return -1;
    }

    Node **node = malloc(sizeof *node);
    int data = top->previous->data;
    *node = top->previous;
    top->previous = top->previous->previous;

    free(*node);
    free(node);

    return data;
}

int peek_top(Node *top) {
    if (top->previous == NULL) {
        return -1;
    }

    return top->previous->data;
}

void print_top_to_bottom(Node *top) {
    Node *current = malloc(sizeof *current);
    current = top->previous;

    printf("Stack top-to-bottom: ");
    while (current != NULL) {
        printf("%d ", current->data);

        current = current->previous;
    }
    printf("\n");
}
