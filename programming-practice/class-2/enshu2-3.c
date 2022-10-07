#include <stdio.h>

main()
{
	float base, height;

	printf("Triangle base:\n");
	scanf("%f", &base);
	printf("Triangle height:\n");
	scanf("%f", &height);
	printf("\nArea: %f\n", base * height / 2);
}