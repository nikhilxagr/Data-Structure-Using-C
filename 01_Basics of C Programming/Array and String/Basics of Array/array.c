#include<stdio.h>
void main()

{
    int a[10], i ;
    printf("enter the array element :");

    for (i=0; i<10;i++ )
    scanf( " %d" ,& a[i]);
    
    for (i=0; i<10;i++);
    printf("\n Arrangement element at index %d is %d",i,a[i]);

}