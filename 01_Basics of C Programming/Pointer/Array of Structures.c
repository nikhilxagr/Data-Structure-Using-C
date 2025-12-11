// Array of Structures

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s[2] = {{1, "Amit"}, {2, "Neha"}};
    printf("%s", s[1].name);  // Output: Neha
    return 0;
}
