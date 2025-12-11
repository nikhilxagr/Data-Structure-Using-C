//  Call by Value

// Copies of actual arguments are passed.

// Changes made in the function do not affect the original values.

// ✅ Example:

#include <stdio.h>

void change(int a) {
    a = 20;
}

int main() {
    int x = 10;
    change(x);
    printf("x = %d", x);  // Output: x = 10
    return 0;
}
