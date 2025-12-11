// Pointers as Function Arguments

// Pointers allow functions to modify actual values


void update(int *x) {
    *x = *x + 5;
}

int main() {
    int a = 10;
    update(&a);
    printf("%d", a);  // Output: 15
    return 0;
}
