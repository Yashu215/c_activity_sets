#include <stdio.h>

struct _complex {
    float real;
    float imaginary;
};

typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);

void output(int n, Complex c[n], Complex result);

int main() {
    int n;
    Complex result;
    n = get_n();
    Complex array[n];
    input_n_complex(n, array);
    result = add_n_complex(n, array);
    output(n, array, result);
    return 0;
}

int get_n() {
    int n;
    printf("Enter the number of arrays: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() {
    Complex num;
    scanf("%f %f", &num.real, &num.imaginary);
    return num;
}

void input_n_complex(int n, Complex c[n]) {
    printf("Enter the complex numbers:\n");
    for (int i = 0; i < n; i++) {
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

Complex add_n_complex(int n, Complex c[n]) {
    Complex sum = {0, 0};
    for (int i = 0; i < n; i++) {
        sum = add(sum, c[i]);
    }
    return sum;
}

void output(int n, Complex c[n], Complex result) {
    
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%.1f+%.1fi", c[i].real, c[i].imaginary);
        if (i < n - 1) {
            printf(" + ");
        }
    }
    printf(" is %.1f+%.1fi\n", result.real, result.imaginary);
}
