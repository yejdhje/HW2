#include <stdio.h>

int main() {
	int n = 5; 
	int space = n - 1;
	int stars = 1;

	for (int i = 1; i < 2 * n; i++) {
		for (int j = 1; j <= space; j++) {
			printf(" ");
		}
		for (int k = 1; k <= stars; k++) {
			printf("*");
		}

		printf("\n");

		if (i < n) {
			space--;
			stars += 2;
		}
		else {
			space++;
			stars -= 2;
		}
	}

	return 0;
}