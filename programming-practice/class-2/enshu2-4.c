#include <stdio.h>

main()
{
	int odd, even;

	printf("Odd number:\n");
	scanf("%d", &odd);
	printf("Even number:\n");
	scanf("%d", &even);
	printf("\nx=%d, y=%d, average=%f\n", odd, even, (float)(odd + even) / 2);
}