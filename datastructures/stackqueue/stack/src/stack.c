#include "../../main/inc/main.h"

void push(Node_t *top, int data) {
    Node_t *node = malloc(sizeof *node);
    node->data = data;

    if (top->previous == NULL) {
        top->previous = node;
        node->previous = NULL;
        return;
    }

    node->previous = top->previous;
    top->previous = node;
}

int pop(Node_t *top) {
    if (top->previous == NULL) {
        return -1;
    }

    Node_t **node = malloc(sizeof *node);
    int data = top->previous->data;
    *node = top->previous;
    top->previous = top->previous->previous;

    free(*node);
    free(node);

    return data;
}

int peek_top(Node_t *top) {
    if (top->previous == NULL) {
        return -1;
    }

    return top->previous->data;
}

void print_top_to_bottom(Node_t *top) {
    Node_t *current = malloc(sizeof *current);
    current = top->previous;

    printf("Stack top-to-bottom: ");
    while (current != NULL) {
        printf("%d ", current->data);

        current = current->previous;
    }
    printf("\n");
}
