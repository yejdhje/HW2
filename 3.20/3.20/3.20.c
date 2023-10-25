#include <stdio.h>

int main() {
	int hoursWorked;
	double hourlyRate;

	while (1) {
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hoursWorked);

		if (hoursWorked == -1) {
			break;
		}

		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%lf", &hourlyRate);

		double grossPay;

		if (hoursWorked <= 40) {
			grossPay = hoursWorked * hourlyRate;
		}
		else {
			grossPay = 40 * hourlyRate + (hoursWorked - 40) * hourlyRate * 1.5;
		}

		printf("Salary is $%.2lf\n", grossPay);
		printf("\n");
	}

	return 0;
}
