#include <stdio.h>
int subtract(int n)
{
	static int init = 100;
	init -= n;
	return init;
}

main()
{
	printf("Enter number:\n");
	int n;
	do
	{
		scanf("%d", &n);
	} while (subtract(n) >= 0);
}