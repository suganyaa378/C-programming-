#include <stdio.h>

int main() {
    char str[100], old, new;
    int i;

    printf("Enter string: ");
    fgets(str, 100, stdin);

    printf("Enter character to replace: ");
    scanf(" %c", &old);

    printf("Enter new character: ");
    scanf(" %c", &new);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == old)
            str[i] = new;
    }

    printf("%s", str);

    return 0;
}
