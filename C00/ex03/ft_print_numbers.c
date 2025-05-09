#include <unistd.h>

void    ft_print_numbers(void)
{
    char    num = '0';

    while (num <= '9') {
        write(1, &num, 1);
        num++;
    }
}

// void ft_print_numbers(void) {
//     for (char i = '0'; i <= '9'; i++) {
//         write(1, &i, 1);
//     }
// }

int	main()
{
	ft_print_numbers();
}