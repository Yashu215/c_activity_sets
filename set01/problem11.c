#include <stdio.h>

struct _complex
{
    float real;
    float imaginary;
};

typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
    Complex num1, num2, result;
    printf("Enter the real and imaginary parts of the first complex number: ");
    num1 = input_complex();
    printf("Enter the real and imaginary parts of the second complex number: ");
    num2 = input_complex();
    result = add_complex(num1, num2);
    output(num1, num2, result);
    return 0;
}

Complex input_complex()
{
    Complex num;
    scanf("%f %f", &num.real, &num.imaginary);
    return num;
}

Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum)
{
    printf("\nThe sum of %.1f+%.1fi and %.1f+%.1fi is %.1f+%.1fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}
