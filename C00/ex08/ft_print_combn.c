#include <unistd.h>

void print_comb(char *arr, int n, int last) {
    write(1, arr, n);
    if (!last) {
        write(1, ", ", 2);
    }
}

void ft_print_combn(int n) {
    if (n <= 0 || n >= 10) return;

    char arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = '0' + i;
    }

    while (1) {
        print_comb(arr, n, 0);

        int last = 1;
        for (int i = 0; i < n; i++) {
            if (arr[i] != '9' - n + 1 + i) {
                last = 0;
                break;
            }
        }

        if (last) break;

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] < '9' - n + 1 + i) {
                arr[i]++;
                for (int j = i + 1; j < n; j++) {
                    arr[j] = arr[j - 1] + 1;
                }
                break;
            }
        }
    }
}

int main() {
    ft_print_combn(2);
}
