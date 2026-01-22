#include <stdio.h>

int main() {
    int n = 6;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= 5; j++) {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
