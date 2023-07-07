#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

void displayPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
}

int main() {
    struct Person person1;

    strcpy(person1.name, "John Doe");
    person1.age = 25;
    person1.height = 1.75;

    displayPerson(person1);

    return 0;
}
