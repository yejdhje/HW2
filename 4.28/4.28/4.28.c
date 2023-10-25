#include <stdio.h>

int main() {
	int paycode;

	while (1) {
		printf("Enter the paycode (1 for manager, 2 for hourly worker, 3 for commission worker, 4 for pieceworker, -1 to end): ");
		scanf("%d", &paycode);

		if (paycode == -1) {
			break;
		}

		double weeklyPay = 0.0;

		switch (paycode) {
		case 1:
			weeklyPay = 1000.0;  //¸g²z©T©w
			break;
		case 2: 
		{
			double hourlyWage, hoursWorked;
			printf("Enter hourly wage: ");
			scanf("%lf", &hourlyWage);
			printf("Enter hours worked: ");
			scanf("%lf", &hoursWorked);
			if (hoursWorked <= 40) {
				weeklyPay = hourlyWage * hoursWorked;
			}
			else {
				weeklyPay = 40 * hourlyWage + (hoursWorked - 40) * 1.5 * hourlyWage;
			}
		}
		break;
		case 3: 
		{
			double grossSales;
			printf("Enter gross weekly sales: ");
			scanf("%lf", &grossSales);
			weeklyPay = 250.0 + (0.057 * grossSales);
		}
		break;
		case 4: 
		{
			double piecesProduced, pieceRate;
			printf("Enter number of pieces produced: ");
			scanf("%lf", &piecesProduced);
			printf("Enter piece rate: ");
			scanf("%lf", &pieceRate);
			weeklyPay = piecesProduced * pieceRate;
		}
		break;
		default:
			printf("Invalid paycode. Please enter a valid paycode.\n");
			continue;
		}

		printf("Weekly pay is: $%.2lf\n", weeklyPay);
	}

	return 0;
}
