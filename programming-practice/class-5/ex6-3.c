#include <stdio.h>

main()
{
	int n, i, sum;
	i = 1;
	sum = 0;
	scanf("%d", &n);
	while (i <= 10)
	{
		sum = sum + i * n;
		printf("i=%d sum=%d\n", i, sum);
		i = i + 1;
	}
}