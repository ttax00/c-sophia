#include <stdio.h>

main()
{
	int h, w;
	printf("insert height & width:\n");
	scanf("%d %d", &h, &w);

	int i, j;
	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= w; j++)
		{
			if (i == 1 || i == h || j == 1 || j == w)
			{
				printf("X");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}