#include<stdio.h>

int main(void) {
    char user[10], courseyr[10];
    int age;
    
    printf("Hello World!\n");
    printf("Enter name: ");
    scanf("%s", user);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter course and year: ");
    scanf("%s", courseyr);

    printf("Hello, %s!\nYou're %d years old in %s!", user, age, courseyr);

    return 0;
}
