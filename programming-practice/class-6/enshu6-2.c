#include <stdio.h>

void sum(int a, int b)
{
	int sum = 0, i;
	for (i = a; i <= b; i++)
	{
		sum += i;
	}
	printf("%d", sum);
}

main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	sum(a, b);
}