#include <stdio.h>

main()
{
	int x;
	printf("input x\n");
	scanf("%d", &x);

	if (x + 25000 == 3500 * 9)
	{
		printf("ok\n");
	}
	else
	{
		printf("Booo\n");
	}
}