#include <stdio.h>

int main() {
    int a[100][100], b[100][100], sum[100][100];
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}