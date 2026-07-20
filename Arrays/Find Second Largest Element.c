#include <stdio.h>

int main() {
    int a[100], n, i, max, second;

    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    if(a[0] > a[1]) {
        max = a[0];
        second = a[1];
    } else {
        max = a[1];
        second = a[0];
    }

    for(i=2; i<n; i++) {
        if(a[i] > max) {
            second = max;
            max = a[i];
        }
        else if(a[i] > second && a[i] != max)
            second = a[i];
    }

    printf("Second Largest = %d", second);

    return 0;
}
