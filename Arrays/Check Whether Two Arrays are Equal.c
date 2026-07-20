#include <stdio.h>

int main() {
    int a[100], b[100];
    int n, i, equal = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            equal = 0;
            break;
        }
    }

    if(equal)
        printf("Arrays are equal");
    else
        printf("Arrays are not equal");

    return 0;
}
