#include <stdio.h>

int do_p(int n, int m)
{
	if (m == 0)
	{
		return n;
	}
	else
	{
		return (n - m) * do_p(n, m - 1);
	}
}

main()
{
	printf("Enter n m:\n");
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d", do_p(n, m - 1));
}