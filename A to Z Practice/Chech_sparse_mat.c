#include <stdio.h>

int main()
{
    int a[3][3] = {
        {0, 0, 1},
        {0, 0, 0},
        {2, 0, 0}};

    int zero = 0, total = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 0)
                zero++;
        }
    }

    if (zero > total / 2)
        printf("Matrix is Sparse\n");
    else
        printf("Matrix is Not Sparse\n");

    return 0;
}
