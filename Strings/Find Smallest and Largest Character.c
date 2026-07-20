#include <stdio.h>

int main() {
    char str[100], small, large;
    int i = 1;

    printf("Enter string: ");
    fgets(str, 100, stdin);

    small = large = str[0];

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] < small)
            small = str[i];
        if (str[i] > large)
            large = str[i];
        i++;
    }

    printf("Smallest = %c\n", small);
    printf("Largest = %c", large);

    return 0;
}
