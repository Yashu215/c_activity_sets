#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main() {
    char str[100];
    char rev_str[100];

    input_string(str);
    str_reverse(str, rev_str);
    output(str, rev_str);

    return 0;
}

void input_string(char *a) {
    printf("Enter a string: ");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);
    int i;

    for (i = 0; i < length; i++) {
        rev_str[i] = str[length - i - 1];
    }
    rev_str[i] = '\0';
}

void output(char *a, char *reverse_a) {
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}
