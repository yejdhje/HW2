#include <stdio.h>

int main() {
	int accountNumber;
	double beginningBalance;
	double totalCharges;
	double totalCredits;
	double creditLimit;

	while (1) {
		printf("Enter account number (-1 to end): ");
		scanf("%d", &accountNumber);

		if (accountNumber == -1) {
			break;
		}

		printf("Enter beginning balance: ");
		scanf("%lf", &beginningBalance);

		printf("Enter total charges: ");
		scanf("%lf", &totalCharges);

		printf("Enter total credits: ");
		scanf("%lf", &totalCredits);

		printf("Enter credit limit: ");
		scanf("%lf", &creditLimit);

		double newBalance = beginningBalance + totalCharges - totalCredits;



		if (newBalance > creditLimit) {
			printf("Account: %d\n", accountNumber);
			printf("Credit limit: %.2lf\n", creditLimit);
			printf("Balance: %.2lf\n", newBalance);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
	}

	return 0;
}