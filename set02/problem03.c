#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n, result;

    n = input_number();
    result = is_composite(n);
    output(n, result);

    return 0;
}

int input_number()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int is_composite(int n)
{
    int i, count_factors = 0;

    for (i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            count_factors++;
        }
    }

    if (count_factors > 2)
    {
        return 1; 
    }
    else
    {
    return 0; 
    }
}

void output(int n, int result)
{
    if (result)
    {
        printf("%d is a composite number.\n", n);
    }
    else
    {
        printf("%d is not a composite number.\n", n);
    }
}
