// Enumerations in C (enum)

// An enum is a user-defined type consisting of named integer constants.

enum days {SUN, MON, TUE, WED};

int main() {
    enum days d = TUE;
    printf("%d", d);  // Output: 2
    return 0;
}
