#include <stdio.h>
#include <math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    float number, result;
    number = input();
    result = square_root(number);
    output(number, result);
    return 0;
}

float input()
{
    float num;
    printf("Enter number: ");
    scanf("%f", &num);
    return num;
}

float square_root(float n)
{
    return sqrt(n);
}

void output(float n, float sqrroot)
{
    printf("\nSquare root of %.1f is %.1f\n", n, sqrroot);
}
