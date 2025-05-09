// Assignment name  : only_a
// Expected files   : only_a.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays a 'a' character on the standard output.

#include <unistd.h>

int		main(void)
{
	write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}