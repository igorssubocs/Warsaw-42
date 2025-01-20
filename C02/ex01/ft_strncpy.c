#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n) {
    unsigned int i;

    for (i = 0; i < n; i++) {
        if (src[i] != '\0') {
            dest[i] = src[i];
        } else {
            dest[i] = '\0';
        }
    }
    return dest;
}


int main(void) {
    char src[] = "Hello, World!";
    char dest[50];

    ft_strncpy(dest, src, 10);
    printf("Src: %s, Dest: %s\n", src, dest);

    return 0;
}