// gets() in C

#include <stdio.h>
int main() {
char buff[100];
printf("Enter a string: ");
// Taking input using gets()
gets(buff);
printf("You entered: %s", buff);
return 0;
}

// Output
// Enter a string: Geeksforgeeks (entered by the user)You entered: Geeksforgeeks



// puts() in C
// C program to illutrate the use of puts() function

#include <stdio.h>
int main()
{
// using puts to print hello world
char* str1 = "Hello Geeks";
puts(str1);
puts("Welcome Geeks");
return 0;
}
// Output
// Hello Geeks
// Welcome Geeks


// **Program for gets and puts-

#include<stdio.h>
#include <string.h>
void main(){

char day[10];
printf("Enter current week day: \n");
gets(day);

printf("Today is: ");
puts(day);
}


// Enter current week day: THURSDAY
// Today is: THURSDAY