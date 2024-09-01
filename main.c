#include<stdio.h>

int main() {
    char user[10];
    int age;
    
    printf("Hello World!\n");
    printf("Enter name: ");
    scanf("%s", user);
    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("Hello, %s! You're %d years old!", user, age);

    return 0;
}