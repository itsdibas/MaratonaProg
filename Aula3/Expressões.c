#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_INSTANCES 100
#define MAX_SIZE 100000

struct Stack {
    char data[MAX_SIZE];
    int top;
};

void initializeStack(struct Stack* stack) {
    stack->top = -1;
}

bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void push(struct Stack* stack, char value) {
    stack->data[++stack->top] = value;
}

char pop(struct Stack* stack) {
    return stack->data[stack->top--];
}

bool isMatch(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool isPalindrome(const char* input) {
    struct Stack stack;
    initializeStack(&stack);

    for (int i = 0; input[i] != '\0'; i++) {
        char currentChar = input[i];

        if (currentChar == '(' || currentChar == '[' || currentChar == '{') {
            push(&stack, currentChar);
        } else if (currentChar == ')' || currentChar == ']' || currentChar == '}') {
            if (isEmpty(&stack)) {
                return false;
            }

            char topChar = pop(&stack);
            if (!isMatch(topChar, currentChar)) {
                return false;
            }
        }
    }

    return isEmpty(&stack);
}

int main() {
    int T;
    char input[MAX_SIZE];

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%s", input);

        if (isPalindrome(input)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}
