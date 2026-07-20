#include <stdio.h>

int main() {
    char str[100];
    int i, flag = 1;

    printf("Enter string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z'))) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Only alphabets");
    else
        printf("Contains other characters");

    return 0;
}
