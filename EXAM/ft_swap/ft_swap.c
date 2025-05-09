// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);

#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
    int x = 2;
    int y = 10;

    ft_swap(&x, &y);
    printf("Swapping: x = %d, y = %d\n", x, y);

    return (0);
}