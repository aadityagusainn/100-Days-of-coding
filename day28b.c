
#include <stdio.h>

int main() {
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size");
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
