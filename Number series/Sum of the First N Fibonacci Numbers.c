#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i, sum = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + a;
        c = a + b;
        a = b;
        b = c;
    }

    printf("%d", sum);

    return 0;
}
