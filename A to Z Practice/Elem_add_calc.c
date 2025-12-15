#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    int base_address = (int)&arr[0];
    int element_size = sizeof(int);

    printf("Base Address of array = %d\n\n", base_address);

    for (i = 0; i < 5; i++)
    {
        printf("Address of arr[%d] = %d\n",
               i,
               base_address + (i * element_size));
    }

    return 0;
}
