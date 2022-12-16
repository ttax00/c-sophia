#include <stdio.h>

main()
{
	char str1[22];
	FILE *file = fopen("p1input.txt", "r");
	fscanf(file, "%s", &str1);
	fclose(file);
	for (int i = 0; i < 10; i++)
	{
		printf("%d,", str1[i * 2]);
	}
}