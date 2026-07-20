#include <stdio.h>

int main() {
    int a[100], n, i;
    int sum = 0, total;

    scanf("%d", &n);

    for(i = 0; i < n - 1; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
        sum += a[i];

    total = n * (n + 1) / 2;

    printf("Missing Number = %d", total - sum);

    return 0;
}
