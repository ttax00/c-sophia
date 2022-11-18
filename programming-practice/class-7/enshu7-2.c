#include <stdio.h>

main()
{
	int i, j, arr[10][10];
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			arr[i][j] = (i + 1) * (j + 1);
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}