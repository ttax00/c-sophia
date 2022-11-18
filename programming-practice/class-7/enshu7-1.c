#include <stdio.h>

main()
{
	int i, x, arr[10];
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &x);
		arr[i] = x;
	}
	for (i = 0; i < 10; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}