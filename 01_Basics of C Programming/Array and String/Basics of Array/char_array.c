// character array program (FOR COMPILE TIME )

// #include <stdio.h>
// #include <string.h>
// void main () {
//     char name [50]= {'R', 'A', 'H', 'U', 'L', ' ', 'S', 'H', 'A', 'R', 'M', 'A'};
//     printf("The string is: %s\n", name);
// }


// Runtime Program

// #include <stdio.h>
// #include <string.h>
// void main () {
//     char name [50];
//     printf("Enter your name: ");
//     scanf("%s", name);
//     printf("The string is: %s\n", name);
// }


//Use of puts and gets function

#include <stdio.h>
#include <string.h>
void main () {
    char name [50];
    printf("Enter your name: ");
    gets(name);
    printf("The normal string is:", name);
    puts(name);
    printf("The indent string is: %s\n", name);
}

