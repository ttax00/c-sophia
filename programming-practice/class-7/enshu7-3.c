#include <stdio.h>

void bar(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("#");
	}
	printf("\n");
}

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
		printf("arr[%d]: ", i);
		bar(arr[i]);
	}
}