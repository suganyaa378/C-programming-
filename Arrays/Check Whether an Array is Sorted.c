#include <stdio.h>

int main() {
    int a[100], n, i, sorted = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++) {
        if(a[i] > a[i + 1]) {
            sorted = 0;
            break;
        }
    }

    if(sorted)
        printf("Array is sorted");
    else
        printf("Array is not sorted");

    return 0;
}
