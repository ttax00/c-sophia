#include <stdio.h>

int fib(int n)
{
	if (n == 1 || n == 0)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

main()
{
	int n;
	printf("enter n:\n");
	scanf("%d", &n);
	printf("fib(%d)=%d", n, fib(n));
}