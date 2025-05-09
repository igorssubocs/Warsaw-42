#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
    int x = 2;
    int y = 10;

    ft_swap(&x, &y);
    printf("Swapping: x = %d, y = %d\n", x, y);

    return 0;
}
