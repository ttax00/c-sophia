#include <stdio.h>

void eval(int x)
{
	if (x == 0)
	{
		printf("zero");
	}
	else if (x < 0)
	{
		printf("negative");
	}
	else
	{
		printf("positive");
	}
}

main()
{
	int x;
	scanf("%d", &x);
	eval(x);
}