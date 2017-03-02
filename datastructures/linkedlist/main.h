#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void print_list(Node *head);
void append(Node *head, int data);
void push(Node **head, int data);
int pop(Node **head);
int removeLast(Node *head);
int removeByIndex(Node **head, int n);
