// 3. static (Static Storage Class)

// Retains value between function calls.

// Scope is local, but lifetime is throughout the program.

// ✅ Example:

#include <stdio.h>

void counter() {
    static int count = 0;  // static variable
    count++;
    printf("Count = %d\n", count);
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}
  

//Output :
// Count = 1  
// Count = 2  
// Count = 3
