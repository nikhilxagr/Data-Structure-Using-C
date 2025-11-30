#include <stdio.h>
#include <ctype.h>

int stack[100];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {
    char exp[100];
    int i, a, b;

    printf("Enter Prefix Expression: ");
    scanf("%s", exp);

    // evaluate from right to left
    for (i = strlen(exp) - 1; i >= 0; i--) {

        if (isdigit(exp[i])) {
            push(exp[i] - '0');   // convert char to int
        } 
        else {
            a = pop();
            b = pop();

            switch (exp[i]) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }
    }

    printf("Result = %d\n", pop());

    return 0;
}
