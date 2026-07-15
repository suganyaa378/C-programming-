#include <stdio.h>

int main()
{
    int n, a = 2, r = 2, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * r;
    }

    return 0;
}
