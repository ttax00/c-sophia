#include <stdio.h>

main()
{
	char str1[6], str2[6];
	printf("Enter 6 char str:\n");
	scanf("%s", &str1);
	int c, d;
	for (c = 5, d = 0; c >= 0; c--, d++)
	{
		str2[c] = str1[d];
	}
	for (d = 0; d < 6; d++)
	{
		printf("%c", str2[d]);
	}
}