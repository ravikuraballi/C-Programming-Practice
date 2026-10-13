#include<stdio.h>

int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);

    printf("your age is %d",age);

    return 0;
}
//practice program//
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Remainder = %d\n", a % b);

    return 0;
}