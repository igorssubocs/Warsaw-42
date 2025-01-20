unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;

    if (size == 0) {
        return 0;
    }

    while (src[i] != '\0' && i < size - 1) {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    while (src[i] != '\0') {
        i++;
    }

    return i;
}

#include <stdio.h>

int	main() {
	char src[] = "World!";
	char dest[] = "Hello ";
	printf("%d | %s\n", ft_strlcpy(dest, src, 10), dest);
}