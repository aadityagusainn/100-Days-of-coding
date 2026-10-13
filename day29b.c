
#include <stdio.h>

int main() {
    int a[100], n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size");
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}
