#include <unistd.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int tempNum;
    int *pointer1 = &tempNum;
    int **pointer2 = &pointer1;
    int ***pointer3 = &pointer2;
    int ****pointer4 = &pointer3;
    int *****pointer5 = &pointer4;
    int ******pointer6 = &pointer5;
    int *******pointer7 = &pointer6;
    int ********pointer8 = &pointer7;
    int *********pointer9 = &pointer8;

    ft_ultimate_ft(pointer9);

    char output[3];
    output[0] = (tempNum / 10) + '0';
    output[1] = (tempNum % 10) + '0';
    output[2] = '\n';

    write(1, output, 3);
}