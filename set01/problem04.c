#include <stdio.h>
#include <stdio.h>

int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main() {
    int num1 = input();
    int num2 = input();

    int result;
    add(num1, num2, &result);

    output(num1, num2, result);

    return 0;
}
int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
void add(int a, int b, int *sum) {
    *sum = a + b;
}
void output(int a, int b, int sum) {
    printf("The sum of %d and %d is %d\n", a, b, sum);
}
