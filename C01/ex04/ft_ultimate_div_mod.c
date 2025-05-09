#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div, mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int main(void)
{
    int x = 42;
    int y = 4;

    ft_ultimate_div_mod(&x, &y);
    printf("%d and %d\n", x, y);
}