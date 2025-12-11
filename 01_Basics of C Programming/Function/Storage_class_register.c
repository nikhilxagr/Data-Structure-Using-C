//  2. register (Register Storage Class)
/*
Stored in CPU register instead of RAM for faster access.

 Cannot access its address using & operator.

 Only for variables that are used frequently (like loop counters).
*/

// ✅ Example:


#include <stdio.h>

int main() {
    register int i;
    for(i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    return 0;
}
