#include <unistd.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int number;
    char output[3];

    ft_ft(&number);

    output[0] = (number / 10) + '0';
    output[1] = (number % 10) + '0';
    output[2] = '\n';

    write(1, output, 3);
}