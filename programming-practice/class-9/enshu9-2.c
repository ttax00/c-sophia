#include <stdio.h>
int sum_squares(int n)
{
	static int sum = 0;
	sum += n * n;
	return sum;
}

main()
{
	printf("Enter number:\n");
	int n;
	do
	{
		scanf("%d", &n);
		printf("current sum: %d\n", sum_squares(n));
	} while (n != 0);
}