#include <stdio.h>

int ft_str_is_numeric(char *str) {
	int i = 0;

    if (str[i] == '\0') {
        return 1;
    }

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
        i++;
    }

    return 1;
}

int	main()
{
    printf("\n%d", ft_str_is_numeric(""));
	printf("%d", ft_str_is_numeric("2127323232"));
	printf("\n%d", ft_str_is_numeric("-fwfeg3_2131,"));
}