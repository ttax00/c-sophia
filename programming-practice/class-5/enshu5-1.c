#include <stdio.h>

main()
{
	int x, i = 0;
	bool even = false;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &x);
		if (x % 2 == 0)
		{
			even = true;
		}
	}
	if (even)
	{
		printf("is Even");
	}
	else
	{
		printf("is Odd");
	}
}