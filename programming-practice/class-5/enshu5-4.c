#include <stdio.h>

main()
{
	int m, n, i, p;
	scanf("%d %d", &m, &n);
	i = n;
	if (n == 1)
	{
		printf("%d^%d = %d", m, n, m);
	}
	else if (n == 0)
	{
		printf("%d^%d = %d", m, n, 1);
	}
	else
	{
		p = m;
		while (i > 1)
		{
			i -= 1;
			p = p * m;
		}
		printf("%d^%d = %d", m, n, p);
	}
}