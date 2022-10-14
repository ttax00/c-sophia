#include <stdio.h>

main()
{
	int x;
	printf("input x\n");
	scanf("%d", &x);

	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
	{
		printf("Leap Year!!\n");
	}
	else
	{
		printf("not Leap Year!!\n");
	}
}