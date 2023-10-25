#include <stdio.h>

int main() {
	double sales;

	while (1) {
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%lf", &sales);

		if (sales == -1) {
			break;
		}

		double salary = 200.0 + (0.09 * sales);

		printf("Salary is: $%.2lf\n", salary);
		printf("\n");
	}

	return 0;
}