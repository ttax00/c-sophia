#include <stdio.h>

void print(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (i % 4 == 0)
		{
			printf("-");
		}
		else
		{
			printf("#");
		}
	}
}

main()
{
	int n;
	scanf("%d", &n);
	print(n);
}