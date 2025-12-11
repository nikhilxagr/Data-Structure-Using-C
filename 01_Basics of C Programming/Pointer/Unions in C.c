// Unions in C

// A union is similar to a structure, but shares memory for all its members.

// Only one member can be used at a time.


union Data {
    int i;
    float f;
};

int main() {
    union Data d;
    d.i = 10;
    d.f = 5.5;  // i is overwritten
    printf("%f", d.f);  // Output: 5.5
    return 0;
}
