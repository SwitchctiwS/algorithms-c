#include "../inc/queue.h"

void enqueue(Node *front, Node *back, int data) {
    Node *node = malloc(sizeof *node);
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

int dequeue(Node *front, Node *back) {
    if (front->previous == NULL) {
        return -1;
    }

    int data = front->previous->data;
    Node **node = malloc(sizeof **node);
    *node = front->previous;

    if (front->previous->previous == NULL) {
        back->next = NULL;
    }
    front->previous = front->previous->previous;

    free(*node);
    free(node);

    return data;
}

int peek_front(Node *front) {
    if (front->previous == NULL) {
        return -1;
    }

    return front->previous->data;
}

void print_front_to_back(Node *front) {
    Node *current = malloc(sizeof *current);
    current = front->previous;

    printf("Queue front-to-back: ");
    while (current != NULL) {
        printf("%d ", current->data);

        current = current->previous;
    }
    printf("\n");
}
