#include <stdio.h>

main()
{
	int x, y;
	float z;
	x = 10;
	y = 3;
	z = (float)x / y;
	printf("%d/%d=%.2f", x, y, z);
}