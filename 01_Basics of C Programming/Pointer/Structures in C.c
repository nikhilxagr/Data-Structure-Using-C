// Structures in C


// A structure is a user-defined data type that groups related variables of different types


struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s1 = {101, "Amit"};
    printf("%d %s", s1.id, s1.name);
    return 0;
}
