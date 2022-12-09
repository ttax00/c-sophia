#include <stdio.h>

main()
{
	char str1[12], str2[6];
	printf("Enter 6 char str:\n");
	scanf("%s", &str1);
	int c, d;
	for (c = 5, d = 0; c >= 0; c--, d++)
	{
		str2[c] = str1[d];
	}
	for (d = 0; d < 6; d++)
	{
		str1[d + 5] = str2[d];
	}
	printf("%s", str1);
}