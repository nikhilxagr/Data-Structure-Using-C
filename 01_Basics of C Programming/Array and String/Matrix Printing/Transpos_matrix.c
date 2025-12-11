#include <stdio.h>
void main()
{
    int i, j, a[2][3], b[3][2]; // original and transpose matrix

    printf("Enter the elements of the 2x3 matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // Transpose logic
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j]; // Store transposed element in b
        }
    }
    printf("The Transpose is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
