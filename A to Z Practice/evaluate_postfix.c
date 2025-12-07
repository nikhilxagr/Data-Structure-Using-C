#include <stdio.h>
#include <ctype.h>

int stack[50], top = -1;

void push(int x)
{
    stack[++top] = x;
}
int pop()
{
    return stack[top--];
}

int main()
{
    char postfix[] = "23*54*+";
    int i, a, b;

    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (isdigit(postfix[i]))
        {
            push(postfix[i] - '0');
        }
        else
        {
            b = pop();
            a = pop();
            switch (postfix[i])
            {
            case '+':
                push(a + b);
                break;
            case '-':
                push(a - b);
                break;
            case '*':
                push(a * b);
                break;
            case '/':
                push(a / b);
                break;
            }
        }
    }

    printf("Result = %d", pop());
    return 0;
}
