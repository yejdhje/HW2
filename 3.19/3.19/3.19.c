#include <stdio.h>

int main() {
	double principal;
	double rate;
	int days;

	while (1) {
		printf("Enter loan principal (-1 to end): ");
		scanf("%lf", &principal);

		if (principal == -1) {
			break;
		}

		printf("Enter interest rate: ");
		scanf("%lf", &rate);

		printf("Enter term of the loan in days: ");
		scanf("%d", &days);

		double interest = (principal * rate * days) / 365.0;

		printf("The interest charge is $%.2lf\n", interest);
		printf("\n");
	}

	return 0;
}
