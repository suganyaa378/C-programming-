#include <stdio.h>

int main() {
    char str[100];
    int i = 0, digits = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            digits++;
        i++;
    }

    printf("Number of digits = %d", digits);

    return 0;
}
