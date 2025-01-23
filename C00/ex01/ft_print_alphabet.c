#include <unistd.h>

// void    ft_print_alphabet(void) {
//     char    letter = 'a';

//     while (letter <= 'z') {
//         write(1, &letter, 1);
//         letter++;
//     }
// }

void ft_print_alphabet(void) {
    for (char i = 'a'; i <= 'z'; i++) {
        write(1, &i, 1);
    }
}

int main() {
    ft_print_alphabet();
}