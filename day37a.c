#include <stdio.h>

int main() {
    int a[100][100];
    int sum[100];
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        sum[i] = 0;

        for(j = 0; j < cols; j++) {
            sum[i] = sum[i] + a[i][j];
        }
    }

    for(i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}