#include <stdio.h>

int main() {
    int n, a[100], k;
    int i, j, last;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < k; i++) {

        last = a[n - 1];

        for(j = n - 1; j > 0; j--) {
            a[j] = a[j - 1];
        }

        a[0] = last;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}