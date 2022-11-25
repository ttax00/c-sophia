#include <stdio.h>

void printMul(int i, int y)
{
	if (i == 10)
		return;
	printf("%d\t", y * i);
	printMul(i + 1, y);
}

void printLine(int i)
{
	if (i == 10)
		return;
	printMul(1, i);
	printf("\n");
	printLine(i + 1);
}

main()
{
	printLine(1);
}