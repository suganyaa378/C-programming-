#include <stdio.h>

int main()
{
    int n, a = 2, d = 3, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a + d;
    }

    return 0;
}
