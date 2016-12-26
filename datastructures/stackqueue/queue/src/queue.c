#include "../../main/inc/main.h"

void enqueue(Node_t *front, Node_t *back, int data) {
    Node_t *node = malloc(sizeof *node);
    node->data = data;
    node->previous = NULL;

    if (back->next == NULL) {
        back->next = node;
        front->previous = node;
        return;
    }

    back->next->previous = node;
    back->next = node;
}

int dequeue(Node_t *front, Node_t *back) {
    if (front->previous == NULL) {
        return -1;
    }

    int data = front->previous->data;
    Node_t **node = malloc(sizeof **node);
    *node = front->previous;

    if (front->previous->previous == NULL) {
        back->next = NULL;
    }
    front->previous = front->previous->previous;

    free(*node);
    free(node);

    return data;
}

int peek_front(Node_t *front) {
    if (front->previous == NULL) {
        return -1;
    }

    return front->previous->data;
}

void print_front_to_back(Node_t *front) {
    Node_t *current = malloc(sizeof *current);
    current = front->previous;

    printf("Queue front-to-back: ");
    while (current != NULL) {
        printf("%d ", current->data);

        current = current->previous;
    }
    printf("\n");
}
