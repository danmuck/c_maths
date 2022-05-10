#include <stdio.h>
#include <string.h>

// Powers of j:
//      j^1 = j
//      j^2 = -1
//      j^3 = (-1)j = -j
//      j^4 = (-1)(-1) = 1
//      j^5 = j^4j = 1j = j

// Define a complex number in rectangular form (a + bj) where a and b are real numbers
struct Complex_abj {
    int real_a, imag_b;
} def_abj;

struct Complex_abj def_abj = {4, 8};
struct Complex_abj add_two(int real_a, int imag_b) {
    struct Complex_abj op_1 = {real_a, imag_b};
    struct Complex_abj op_2 = {def_abj.real_a, def_abj.imag_b};

    struct Complex_abj out_1 = {real_a + op_2.real_a, imag_b + op_2.imag_b};
    return out_1;
};

// https://stackoverflow.com/questions/13399594/how-to-extract-numbers-from-string-in-c
void get_nums(char complex_num[32]) {
    char* s = &complex_num[32];
    int total_n = 0;
    int n;
    int i;
    printf("digit %s", s);
    while (1 == sscanf(s + total_n, "%*[^0123456789]%d%n", &i, &n))
    {
        total_n += n;
        printf("%d\n", i);
    }
};

int main() {
    struct Complex_abj out_1 = add_two(5, 6);
    printf("%d + %dj \n", out_1.real_a, out_1.imag_b);

    char complex_1[32], complex_2[32];
    printf("Enter a complex number in rectangular form \n: ");
    scanf("%s", complex_1);
    get_nums(complex_1);



}