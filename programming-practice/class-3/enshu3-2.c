#include <stdio.h>

main()
{
	int x, y;
	printf("input x & y\n");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1st");
	}
	else if (x > 0 && y < 0)
	{
		printf("4th");
	}
	else if (x < 0 && y > 0)
	{
		printf("2nd");
	}
	else if (x < 0 && y < 0)
	{
		printf("3rd");
	}
	else
	{
		printf("origin 0 0");
	}
}