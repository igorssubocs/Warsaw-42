#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// void    ft_is_negative(int n) {
//     if (n < 0) {
//         write(1, "N", 1);
//     } else {
//         write(1, "P", 1);
//     }
// }

void    ft_is_negative(int n)
{
    char i = (n < 0) ? 'N' : 'P';
    write(1, &i, 1);
}

int	main()
{
    ft_is_negative(0);
    ft_putchar('\n');
    ft_is_negative(-1);
    ft_putchar('\n');
}