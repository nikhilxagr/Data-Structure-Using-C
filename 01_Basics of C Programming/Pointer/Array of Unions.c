// Array of Unions

// Only one union member can hold a value at a time, even in arrays.


union Data {
    int i;
    float f;
};

int main() {
    union Data d[2];
    d[0].i = 5;
    d[1].f = 3.14;
    printf("%d %.2f", d[0].i, d[1].f);  // May give unexpected result due to shared memory
    return 0;
}
