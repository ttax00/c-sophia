#include <stdio.h>

main()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 4; j > -1; j--)
		{
			if (j > i)
			{
				printf(" ");
			}
			else
			{
				printf("E");
			}
		}
		printf("\n");
	}
}