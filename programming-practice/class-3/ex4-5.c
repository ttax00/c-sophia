#include <stdio.h>

main()
{
	int x;
	printf("input x\n");
	scanf("%d", &x);

	if (x == 0)
	{
		printf("x is 0\n");
	}
	else if (x > 0)
	{
		printf("x is positive");
	}
	else
	{
		printf("x is negative");
	}
}