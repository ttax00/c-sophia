#include <stdio.h>

main()
{
	int unitPrice, amount, bill, taxBill;
	unitPrice = 175;
	amount = 7;

	printf("Unit price: %d\n", unitPrice);
	printf("Amount: %d\n", amount);
	printf("Price: %d\n", unitPrice * amount);
	printf("Tax price: %.1f\n", (float)unitPrice * (float)amount * 1.1);
}