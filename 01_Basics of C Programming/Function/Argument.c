//  3. Types of Arguments
// 📍 Actual Arguments:
// Values passed from the main() to the function when calling it.

// 📍 Formal Arguments:
// Variables used in the function definition to receive the values.

// ✅ Example:



#include <stdio.h>

void show(int x) {  // formal argument
    printf("Value = %d", x);
}

int main() {
    int num = 10;
    show(num);  // actual argument
    return 0;
}