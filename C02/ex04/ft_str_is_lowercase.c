#include <stdio.h>

int ft_str_is_lowercase(char *str) {
    int i = 0;

    if (str[i] == '\0') {
        return 1;
    }

    while (str[i] != '\0') {
        if (str[i] < 'a' || str[i] > 'z') {
            return 0;
        }
        i++;
    }

    return 1;
}

int	main() {
	printf("%d", ft_str_is_lowercase("abc"));
    printf("\n%d", ft_str_is_lowercase("ABC"));
    printf("\n%d", ft_str_is_lowercase("123"));
    printf("\n%d", ft_str_is_lowercase(""));
}