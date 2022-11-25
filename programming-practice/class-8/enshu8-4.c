#include <stdio.h>

main()
{
	int n, k;
	printf("enter n & k:\n");
	scanf("%d %d", &n, &k);
	if (k < 2)
	{
		printf("error: k is less than 2");
	}
	else
	{
		int count = 0;
		while (n - k >= 0)
		{
			count++;
			n = n - k;
		}
		printf("count: %d", count);
	}
}