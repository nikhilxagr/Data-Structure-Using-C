// 4. extern (External Storage Class)

// Used to declare a global variable defined in another file or scope.

// Helps share variables across multiple files or functions.

// ✅ Example (Single File Usage):


#include <stdio.h>

int x = 10;   // Global variable

void show() {
    extern int x;  // refers to the global x
    printf("Value of x = %d\n", x);
}

int main() {
    show();
    return 0;
}
