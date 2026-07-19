#include <stdio.h>

int main() {
    char str[100];
    int i = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= '0' && str[i] <= '9') ||
              str[i] == ' ' || str[i] == '\n')) {
            special++;
        }
        i++;
    }

    printf("Number of special characters = %d", special);

    return 0;
}
