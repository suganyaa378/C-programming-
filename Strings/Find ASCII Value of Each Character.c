#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c = %d\n", str[i], str[i]);

    return 0;
}
