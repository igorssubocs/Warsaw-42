#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;

    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (i == 0 || (!(str[i - 1] >= 'a' && str[i - 1] <= 'z') && !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
        }
        i++;
    }
    return str;
}

int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));
}
