#include <stdio.h>

int main() {
    char str[100];
    int i = 0, alpha = 0, digit = 0, special = 0;
  
    scanf("%s", str);

    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            alpha++;
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else
            special++;

        i++;
    }

    printf("Alphabets = %d\nDigits = %d\nSpecial Characters = %d", alpha, digit, special);

    return 0;
}
