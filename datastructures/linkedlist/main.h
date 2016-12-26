#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node_t;

void print_list(Node_t *head);
void append(Node_t *head, int data);
void push(Node_t **head, int data);
int pop(Node_t **head);
int removeLast(Node_t *head);
int removeByIndex(Node_t **head, int n);
