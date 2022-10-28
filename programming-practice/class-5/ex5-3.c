#include <stdio.h>

main()
{
	int x;
	do
	{
		x = rand() % 100;
		printf("%d\n", x);
	} while (x != 50);
}