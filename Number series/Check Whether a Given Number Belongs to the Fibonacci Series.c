#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;

    scanf("%d", &n);

    while(a < n)
    {
        c = a + b;
        a = b;
        b = c;
    }

    if(a == n)
        printf("Fibonacci Number");
    else
        printf("Not a Fibonacci Number");

    return 0;
}
