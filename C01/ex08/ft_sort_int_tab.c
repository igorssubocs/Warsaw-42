#include <stdio.h>

void ft_sort_int_tab(int *tab, int size) {
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int	main() {
	int tab[] = {0, 1, 2, 3, 4};
	int size = 5;

	ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
}