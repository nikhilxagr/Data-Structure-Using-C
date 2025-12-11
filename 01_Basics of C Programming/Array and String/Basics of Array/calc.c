#include <stdio.h>

int main()
{
    char operator;
    float num1, num2;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (operator== '+')
        printf("Result: %.2f\n", num1 + num2);
    else if (operator== '-')
        printf("Result: %.2f\n", num1 - num2);
    else if (operator== '*')
        printf("Result: %.2f\n", num1 * num2);
    else if (operator== '/')
    {
        if (num2 != 0)
            printf("Result: %.2f\n", num1 / num2);
        else
            printf("Error! Division by zero.\n");
    }
    else
        printf("Invalid operator!\n");

    return 0;
}
