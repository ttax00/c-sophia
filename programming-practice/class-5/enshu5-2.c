#include <stdio.h>
#include <stdlib.h>

main()
{
	int x, y, i, c;
	for (i = 0; i < 30; i++)
	{
		c++;
		x = rand() % 100;
		y = rand() % 100;

		if (x >= 50 && y >= 50)
		{
			printf("x=%d y=%d\n", x, y);
		}
	}
}