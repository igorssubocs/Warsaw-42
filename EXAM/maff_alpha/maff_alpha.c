// Assignment name  : maff_alpha
// Expected files   : maff_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the alphabet, with even letters in uppercase, and
// odd letters in lowercase, followed by a newline.

// Example:

// $> ./maff_alpha | cat -e
// aBcDeFgHiJkLmNoPqRsTuVwXyZ$

#include <unistd.h>

// int   main(void) {
//     write(1,"aBcDeFgHiJkLmNoPqRsTuVwXyZ", 27);
//     return 0;
// }

void  ft_putchar(char c)
{
    write(1, &c, 1);
}

int   main(void) {
    char a = 'a';
    char b = 'B';
    
    while (a <= 'z' && b <= 'Z') {
        ft_putchar(a);
        ft_putchar(b);
        a += 2;
        b += 2;
    }
    write(1, "\n", 1);
}