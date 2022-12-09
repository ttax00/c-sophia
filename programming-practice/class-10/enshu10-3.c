#include <stdio.h>
#include <string.h>
main()
{
	char str1[100];
	printf("Enter str:\n");
	scanf("%s", &str1);
	int d;

	for (d = 0; d < sizeof(str1); d++)
	{
		if ('#' == str1[d])
		{
			printf("# is %dth character", d);
			break;
		}
	}
}