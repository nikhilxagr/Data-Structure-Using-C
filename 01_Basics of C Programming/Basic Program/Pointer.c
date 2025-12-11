//Pointer Arithmatic

// #include<stdio.h>
// int main()
//    { int a , b, *p, *q;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     p = &a; 
//     q = &b; 
//     printf("The sum is : %d\n", *p +  *q);
//     printf("The difference is  : %d\n", *p - *q);
//     printf("The product is : %d\n", *p * *q);
//     printf("The divide is : %d\n", *p/(*q));     // *q is used to dereference q
//     printf("The modulas is : %d\n", *p%(*q));    // *q is used to dereference q 
//     printf("The increment is : %d\n", ++*p);     // *p is used to dereference p
//     printf("The decrement is : %d\n", --*q);     // *q is used to dereference q
//     return 0;
// }

    
//Array and Pointer 

// #include<stdio.h>

// int main() {
//     int x[5] = {1, 2, 3, 4, 5};
//     int *p;
//     p = x;     // or p = &x[0];

//     printf("%d\n", x[0]);                              // 1
//     printf("%d\n", *p);                                // 1
//     printf("%d\n", *p++);                              // 1, then p points to x[1]
//     printf("%d\n", ++*p);                              // increments x[1] from 2 to 3, prints 3
//     printf("%d\n", *(p + 3));                          // p now at x[1], p+3 points to x[4], prints 5
//     printf("%d\n", *&x[2]);                            // 3

//     return 0;
// }



//Pointer in character & string

#include<stdio.h>
#include<string.h>
int main() {
    char *s[ ] = {"GATE", "GATECODING", "Nikhil", "Trending"};
{
    printf("%s\n", s+1);
    printf("%s\n", *(s+2));
    printf("%s\n", *(s+1)+8);
}
}