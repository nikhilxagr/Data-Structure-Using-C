#include<stdio.h>
void main ()
{
    int i, j, a[2][3], sum = 0;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
            sum= sum + a[i][j];
            // sum row = sum + a[i][j];
            // sum column = sum + a[j][i];
        }
        printf("\n");
    }
    printf("\n Sum= %d", sum);
}