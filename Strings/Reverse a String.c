#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0')
        i++;

    for (j = 0; j < i / 2; j++) {
        temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    printf("Reversed string = %s", str);

    return 0;
}
