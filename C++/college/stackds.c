
#include <stdio.h> j
#include <stdlib.h>
#define SIZE 5

int s[SIZE];
int top = -1;

void push() {
    int val;
    if (top == SIZE - 1) {
        printf("Stack overflow\n");
    } else { 
        printf("Enter the value to push: ");
        scanf("%d", &val);
        top++;
        s[top] = val;
        printf("%d is pushed onto the stack\n", val);
    }
}

void pop() {  
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("%d popped from the stack\n", s[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("STACK ELEMENTS ARE:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", s[i]);
        }
    }
}

int main() {
    int ch, n;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1 - Push\n2 - Pop\n3 - Display\n4 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("How many elements do you want to push? ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    push();
                }
                break;

            case 2:
                printf("How many elements do you want to pop? ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    pop();
                }
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
