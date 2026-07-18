#include <stdio.h>

int main() {
    char str[100], ch;
    int i;
    scanf("%s", str);
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Found at position %d", i + 1);
            break;
        }
    }

    if (str[i] == '\0')
        printf("Character not found");

    return 0;
}
