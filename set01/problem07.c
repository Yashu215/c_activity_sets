#include <stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main()
{
    int n, sum;
    n = input_n();
    sum = sum_n_nos(n);
    output(n, sum);
    return 0;
}

int input_n()
{
    int n;
    printf("Enter a positive integer:");
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("Invalid input! enter a positive value:");
        scanf("%d", &n);
    }
    return n;
}

int sum_n_nos(int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += i;
    }
    return sum;
}

void output(int n, int sum)
{
    printf("The sum of all natural numbers till %d is %d\n", n, sum);
}