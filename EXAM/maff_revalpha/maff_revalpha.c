// Assignment name  : maff_revalpha
// Expected files   : maff_revalpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the alphabet in reverse, with even letters in
// uppercase, and odd letters in lowercase, followed by a newline.

// Example:

// $> ./maff_revalpha | cat -e
// zYxWvUtSrQpOnMlKjIhGfEdCbA$

#include <unistd.h>

// int     main(void) {
//     write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA", 27);
//     return 0;
// }

int    main(void) {
    char  z = 'z';
    char  y = 'Y';

    while (z >= 'a' && y >= 'A') {
      write(1, &z, 1);
      write(1, &y, 1);
      z -= 2;
      y -= 2;
    }
    write(1, "\n", 1);
 }