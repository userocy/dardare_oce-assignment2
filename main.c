#include<stdio.h>

int main() {
    char user[10];
    
    printf("Hello World!\n");
    printf("Enter name: ");
    scanf("%s", user);
    
    printf("Hello, %s!", user);

    return 0;
}