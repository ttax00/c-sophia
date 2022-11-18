#include <stdio.h>

void sub_swap(int ax[], int ay[])
{
	for (int i = 0; i < 5; i++)
	{
		int handle = ax[i];
		ax[i] = ay[i];
		ay[i] = handle;
	}
}

void print(int ax[], int ay[])
{
	for (int i = 0; i < 5; i++)
	{
		printf("x[%d] = %d \t y[%d] = %d\n", i, ax[i], i, ay[i]);
	}
}

main()
{
	int ax[5], ay[5];
	for (int i = 0; i < 5; i++)
	{
		ax[i] = i + 1;
		ay[i] = i * 10;
	}
	print(ax, ay);
	sub_swap(ax, ay);
	printf("\n");
	print(ax, ay);
}