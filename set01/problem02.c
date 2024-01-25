//2. Write a C program to add two numbers.
#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter a number:\n");
    scanf("%d %d", &a, &b);
    sum=a+b;
    printf("The sum of %d + %d is %d\n", a, b, sum);
    return 0;
}