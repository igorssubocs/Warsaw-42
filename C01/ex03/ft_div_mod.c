#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b == 0) {
        *div = 0;
        *mod = 0;
    } else {
        *div = a / b;
        *mod = a % b;
    }
}

int main(void)
{
    int a = 42, b = 4;
    int div, mod;
    ft_div_mod(a, b, &div, &mod);
    printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);

    a = 42;
    b = 0;
    ft_div_mod(a, b, &div, &mod);
    printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);

    return 0;
}