#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Array base address: %p\n", (void *)arr);

    for (i = 0; i < 5; i++)
    {
        printf("Address of arr[%d] = %p\n", i, (void *)&arr[i]);
    }

    return 0;
}
