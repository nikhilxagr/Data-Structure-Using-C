// Pointers and Structures
// You can use pointers to access structure members.

struct Student {
    int id;
};

int main() {
    struct Student s1 = {101};
    struct Student *ptr = &s1;
    printf("%d", ptr->id);  // Output: 101
    return 0;
}
