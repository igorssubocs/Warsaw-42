#include <stdio.h>

int ft_str_is_alpha(char *str) {
    int i = 0;

    if (str[i] == '\0') {
        return 1;
    }

    while (*(str + i) != '\0') {
        char ascii = *(str + i);
        if (ascii < 65 || (ascii > 90 && ascii < 97) || ascii > 122) {
            return 0;
        }
        i++;
    }

    return 1;
}

int main() {
    printf("%d", ft_str_is_alpha("Hello"));
    printf("\n%d", ft_str_is_alpha("Hello123"));
    printf("\n%d", ft_str_is_alpha(""));
}