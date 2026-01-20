#include <stdio.h>

int main() {
    int i, j;
    int rows, cols;

    printf("rows: ");
    scanf("%d", &rows);

    printf("columns: ");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
