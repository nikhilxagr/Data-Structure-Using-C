#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {0, 0, 3},
        {0, 4, 0},
        {5, 0, 0}
    };

    int zeroCount = 0;

    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
            if (matrix[i][j] == 0)
                zeroCount++;
        }
        printf("\n");
    }

    printf("Zero elements: %d\n", zeroCount);

    return 0;
}
