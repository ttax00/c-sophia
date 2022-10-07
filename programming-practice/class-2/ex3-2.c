#include <stdio.h>

main()
{
	int a, b;
	printf("Input two integers:\n");
	scanf("%d %d", &a, &b);
	printf("a*b=%d\n", a * b);

	printf("Input two integers:\n");
	scanf("%d, %d", &a, &b);
	printf("a*b=%d\n", a * b);
}