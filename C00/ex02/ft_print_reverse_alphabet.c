#include <unistd.h>

// void    ft_print_reverse_alphabet(void) {
//     char    letter = 'z';

//     while (letter >= 'a') {
//         write(1, &letter, 1);
//         letter--;
//     }
// }

void ft_print_reverse_alphabet(void) {
    for (char i = 'z'; i >= 'a'; i--) {
        write(1, &i, 1);
    }
}

int main() {
    ft_print_reverse_alphabet();
}