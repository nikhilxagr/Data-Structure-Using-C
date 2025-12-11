//  2. Pointer Arithmetic
#include<stdio.h>
int main(){
int arr[3] = {10, 20, 30};
int *p = arr;
printf("%d", *(p + 1));
}

// Output: 20
