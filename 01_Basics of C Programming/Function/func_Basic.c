
// User-Defined Functions
// ✅ Syntax:
// return_type function_name(parameters) {
//     // code
// }

#include <stdio.h>

void greet() {
    printf("Hello, welcome to C programming!\n");
}

int main() {
    greet();  // function call
    return 0;
}


//  2. Function Declaration

int add(int, int); // declaration

int main() {
    int result = add(5, 3); // call
    printf("Sum = %d", result);
    return 0;
}

int add(int a, int b) {  // definition
    return a + b;
}



// 4. Function Definition
// It is the actual code of the function — what it does.

// ✅ Structure:

// return_type function_name(parameter_list) {
//     // body of the function
//     return value;
// }