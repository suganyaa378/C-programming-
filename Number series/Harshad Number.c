#include <stdio.h>

int main()
{
    int n,temp,sum=0,rem;

    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }

    if(temp%sum==0)
        printf("Harshad Number");
    else
        printf("Not Harshad Number");

    return 0;
}
