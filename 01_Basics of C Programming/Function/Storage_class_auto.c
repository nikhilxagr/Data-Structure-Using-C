//  1. auto (Automatic Storage Class)
/*
 Scope: Local to the function/block.

Lifetime: Created when the block starts, destroyed when it ends.

 Default for all local variables (even if not written explicitly).
*/

// ✅ Example:

#include <stdio.h>

void test() {
    auto int x = 5;  // same as: int x = 5;
    printf("Auto variable x = %d\n", x);
}

int main() {
    test();
    return 0;
}