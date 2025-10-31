#include <stdio.h>
#define MAX 5   

int stack[MAX];
int top = -1;  


int isFull() {
    return top == MAX - 1;
}


int isEmpty() {
    return top == -1;
}


void push(int value) {
    if (isFull()) {
        printf(" Stack Overflow! Cannot push %d. Stack is full.\n", value);
    } else {
        top++;
        stack[top] = value;
        printf(" %d pushed into stack.\n", value);
    }
}


void pop() {
    if (isEmpty()) {
        printf("Stack Underflow! No element to pop.\n");
    } else {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

void peek() {
    if (isEmpty()) {
        printf("Stack is empty. No top element.\n");
    } else {
        printf(" Top element is: %d\n", stack[top]);
    }
}


void display() {
    if (isEmpty()) {
        printf("Stack is empty. Nothing to display.\n");
    } else {
        printf("Stack elements (top to bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Stack Operations Menu ---\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf(" Exiting... Goodbye!\n");
                return 0;

            default:
                printf(" Invalid choice! Please try again.\n");
        }
    }
}
