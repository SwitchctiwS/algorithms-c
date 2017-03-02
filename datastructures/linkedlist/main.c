#include "main.h"

int main() {
    Node *head = NULL;
    head = (Node*)malloc(sizeof(Node));
    if (head == NULL) {
        return 1;
    }

    head->data = 1;
    head->next = NULL;

    append(head, 2);
    append(head, 3);

    print_list(head);

    push(&head, 4);
    push(&head, 5);

    print_list(head);

    pop(&head);
    pop(&head);

    print_list(head);

    return 0;
}

void print_list(Node *head) {
    Node *current = head;

    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

void append(Node *head, int data) {
    Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = (Node*)malloc(sizeof(Node));
    current->next->data = data;
    current->next->next = NULL;
}

void push(Node **head, int data) {
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

int pop(Node **head) {
    int retval = -1;
    Node *nextNode = NULL;

    if (*head == NULL) {
        return -1;
    }

    nextNode = (*head)->next;
    retval = (*head)->data;
    free(*head);
    *head = nextNode;

    return retval;
}

int removeByIndex(Node **head, int n) {
    int i = 0;
    int retval = -1;
    Node *current = *head;
    Node *tempNode = NULL;

    if (n == 0) {
        return pop(head);
    }

    for (i = 0; i < n - 1; i++) {
        if (current->next == NULL) {
            return -1;
        }

        current = current->next;
    }

    tempNode = current->next;
    retval = tempNode->data;
    current->next = tempNode->next;
    free(tempNode);

    return retval;
}
