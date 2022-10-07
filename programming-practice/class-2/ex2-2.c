#include <stdio.h>

main()
{
	int a, b, c;
	float x, y, z;
	a = 1;
	b = 2;
	c = a + b;
	x = 0.1;
	y = 0.2;
	z = x + y;
	printf("%d+%d=%d\n", a, b, c);
	printf("%d+%d=%d\n", x, y, z);
	printf("%.2f+%.2f=%.2f\n", x, y, z);
}