#include <stdio.h>

int main() {
	int n = 5;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1)
				printf("%d ", j);
			else if (i == n)
				printf("%d ", n - j + 1);
			else if (j == 1)
				printf("%d ", i);
			else if (j == n)
				printf("%d ", n - i + 1);
			else
				printf("  ");
		}
		printf("\n");
	}

	return 0;
}
