// Paranthesis matching problem
// What is paranthsis matching problem?
// Paranthesis matching problem is a problem where we have to check if the paranthesis are matching or not.
// For example:
// (()) is a valid paranthesis


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack {
    char data[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack) {
    stack->top = -1;
}

int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

void push(struct Stack *stack, char value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->top++;
    stack->data[stack->top] = value;
}

char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
    char value = stack->data[stack->top];
    stack->top--;
    return value;
}

int is_valid_paranthesis(char *str) {
    struct Stack stack;
    initialize(&stack);
    int i, len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == '(') {
            push(&stack, str[i]);
        } else if (str[i] == ')') {
            if (isEmpty(&stack)) {
                return 0;
            }
            if (pop(&stack) != '(') {
                return 0;
            }
        }
    }
    return isEmpty(&stack);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (is_valid_paranthesis(str)) {
        printf("Valid paranthesis\n");
    } else {
        printf("Invalid paranthesis\n");
    }
    return 0;
}
