#include<stdio.h>
#include<stdlib.h>

int main() {
    int *arr;
    int n, i;

    printf("Enter the number of element");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL){
        printf("Memory not allocated !\n");
        return 1;
    }

    printf("Enter the %d element\n", n);
    for( i= 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("you entered the element\n");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}