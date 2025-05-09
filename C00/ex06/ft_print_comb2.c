#include <unistd.h>

void    ft_print_comb2(void)
{
    char    num[5];
    char    i, j;

    for (i = 0; i <= 98; i++) {
		for (j = i + 1; j <= 99; j++) {
			num[0] = (i / 10) + '0';
			num[1] = (i % 10) + '0';
			num[2] = (' ');
			num[3] = (j / 10) + '0';
			num[4] = (j % 10) + '0';

            write(1, num, 5);
			if (!(i == 98 && j == 99)) {
                write(1, ", ", 2);
			}
		}
	}
}

int main()
{
	ft_print_comb2();
}