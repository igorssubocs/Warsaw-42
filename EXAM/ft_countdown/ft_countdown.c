// Assignment name  : ft_countdown
// Expected files   : ft_countdown.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays all digits in descending order, followed by a
// newline.

// Example:
// $> ./ft_countdown | cat -e
// 9876543210$
// $>

#include <unistd.h>

// int     main(void)
// {
//     for (char i = '9'; i >= '0'; i--) {
//         write(1, &i, 1);
//     }
//     write(1, "\n", 1);
// }

int     main(void)
{
    char i = '9';
    
    while (i >= '0') {
        write(1, &i, 1);
        i--;
    }
    write(1, "\n", 1);
}
