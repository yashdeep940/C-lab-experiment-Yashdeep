#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Name: %s, Age: %d\n", name, age);

    return 0;
}
