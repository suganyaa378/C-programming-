#include <stdio.h>

int main()
{
    int n, i, sq, temp, d = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sq = i * i;
        temp = i;
        d = 1;

        while(temp > 0)
        {
            d = d * 10;
            temp = temp / 10;
        }

        if(sq % d == i)
            printf("%d ", i);
    }

    return 0;
}
