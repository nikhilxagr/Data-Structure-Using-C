#include <stdio.h>
void main()

{
    int a[5], i;
    float sum = 0, avg;
    printf("enter the array element :");

    for (i = 0; i < 5; i++)
        scanf(" %d", &a[i]);

    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    avg = sum / 5;
    printf("sum %f", sum);
    printf("\n average %f", avg);
}