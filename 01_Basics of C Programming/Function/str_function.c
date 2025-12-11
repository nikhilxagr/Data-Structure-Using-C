
// Use of strlen function


//strlen   

// RUNTIME PROGRAM

#include <stdio.h>
#include <string.h>
void main () {
    char name [50];
    printf("Enter your name: ");
    gets(name);
    int length = strlen(name);
    printf("The string is: %s\n", name);
    printf("The length of the string is: %d\n", length);
}

// Output: The string is: Rahul Sharma
// The length of the string is: 12


//COMPILE TIME PROGRAM

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "Coding";
//     int len = strlen(str);  // len = 6
//     printf("Length = %d", len);
//     return 0;
// }
// Output: Length = 6




//strcat  (Concatenate two strings)

#include <stdio.h>
#include <string.h>
int main() {
    char str1[20] = "Hello ";
    char str2[] = "World";
    strcat(str1, str2);  // str1 becomes "Hello World"
    printf("%s", str1);
    return 0;
}
// Output: Hello World



//strcmp  (Compare two strings)

#include <stdio.h>
#include <string.h>

void main() {
    char str1[] = "apple";
    char str2[] = "apple";

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
}
// Output: Strings are equal



//strcpy (Copy one string to another)

//RUNTIME PROGRAM

#include <stdio.h>  
#include <string.h>
void main()
{
    char str1[20], str2[20];
    printf("Enter first string: ");
    gets(str1);
    // NOTE THE POINT =  gets(str1); - Use this instead of scanf to read a string with spaces
    printf("Enter second string: ");
    gets(str2); 

    strcpy(str1, str2);  // Copy str2 to str1
    //strcpy(str2, str1);   Copy str1 to str2
    //strcpy(str1, str1);  // Copy str1 to str1 (no change) 
    
    printf("After copying, str1: %s\n", str1);
    printf("After copying, str2: %s\n", str2);

}

//COMPLIE TIME PROGRAM
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[] = "Hello";
//     char str2[20];

//     strcpy(str2, str1);      // str2 becomes "Hello"
//     printf("str2 = %s", str2);
//     return 0;
// }
