#include "main.h"
// LIFO == stack
// FIFO == queue
// To preserve memory, it may be a better idea it NOT declare variables at the top
int main(int argc, char **argv) {
    bool exit_menu;
    int data;
    int menu_choice;
    char* temp = malloc(11 * sizeof *temp);
    Node* top = malloc(sizeof *top);
    Node* front = malloc(sizeof *front);
    Node* back = malloc(sizeof *back);
    top->previous = NULL;
    front->previous = NULL;
    back->next = NULL;


    exit_menu = false;
    while (exit_menu == false) {
        printf("This program provides the stack and queue data structures.\n\n");

        printf("11. Push\n");
        printf("12. Pop\n");
        printf("13. Peak Top\n");
        printf("14. Print Stack\n");
        printf("\n");

        printf("21. Enqueue\n");
        printf("22. Dequeue\n");
        printf("23. Peek Front\n");
        printf("24. Print Queue\n");
        printf("\n");

        printf("99. Exit\n");
        printf("\n");

        printf("Enter option: ");
        temp = input(3);
        menu_choice = atoi(temp);
        switch (menu_choice) {
            case 11:
                printf("Enter data: ");

                temp = input(11);
                data = atoi(temp);
                push(top, data);

                printf("%d pushed\n", data);

                break;

            case 12:
                data = pop(top);
                printf("%d popped\n", data);

                break;

            case 13:
                printf("Top of stack: %d\n", peek_top(top));

                break;

            case 14:
                print_top_to_bottom(top);

                break;

            case 21:
                printf("Enter data: ");
                temp = input(11);
                data = atoi(temp);
                enqueue(front, back, data);

                printf("%d enqueued\n", data);

                break;

            case 22:
                printf("%d dequeued\n", dequeue(front, back));

                break;

            case 23:
                printf("Front of queue: %d\n", peek_front(front));

                break;

            case 24:
                print_front_to_back(front);

                break;

            case 99:
                exit_menu = true;

                break;

            default:
                printf("That was not a valid option.\n");

                break;
        }

        continue_prompt();
    }

    // Don't THINK I need to do this since ending the program should do this anyway
    // free(top);
    // free(front);
    // free(back);
    // free(temp);

    return 0;
}
