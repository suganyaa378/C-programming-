#include <stdio.h>

int main() {
    char str[100];
    int i, count[256] = {0};

    printf("Enter string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++)
        count[str[i]]++;

    for (i = 0; i < 256; i++) {
        if (count[i] > 0 && i != '\n')
            printf("%c = %d\n", i, count[i]);
    }

    return 0;
}
