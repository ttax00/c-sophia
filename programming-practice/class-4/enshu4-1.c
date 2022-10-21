#include <stdio.h>

main()
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		if (i % 13 == 0)
		{
			printf("%d\n", i);
		}
	}
}