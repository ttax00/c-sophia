#include <stdio.h>

main()
{
	int n, a, b, c;
	scanf("%d", &n);
	for (a = 0; a <= n; a++)
	{
		for (b = a; b <= n; b++)
		{
			for (c = b; c <= n; c++)
			{
				if (a + b + c == n)
				{
					printf("%d + %d + %d = %d\n", a, b, c, n);
				}
			}
		}
	}
}