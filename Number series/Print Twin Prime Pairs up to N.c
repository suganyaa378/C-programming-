#include <stdio.h>

int main()
{
    int n, i, j, c1, c2;

    scanf("%d", &n);

    for(i = 2; i <= n - 2; i++)
    {
        c1 = 0;
        c2 = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                c1++;
        }

        for(j = 1; j <= i + 2; j++)
        {
            if((i + 2) % j == 0)
                c2++;
        }

        if(c1 == 2 && c2 == 2)
            printf("(%d,%d)\n", i, i + 2);
    }

    return 0;
}
