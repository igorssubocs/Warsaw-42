#include <stdio.h>

int ft_str_is_uppercase(char *str) {
    int i = 0;

    if (str[i] == '\0') {
        return 1;
    }

    while (str[i] != '\0') {
        if (str[i] < 'A' || str[i] > 'Z') {
            return 0;
        }
        i++;
    }

    return 1;
}

int	main() {
	printf("%d", ft_str_is_uppercase("abc"));
    printf("\n%d", ft_str_is_uppercase("ABC"));
    printf("\n%d", ft_str_is_uppercase("123"));
    printf("\n%d", ft_str_is_uppercase(""));
}
