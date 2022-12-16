#include <stdio.h>

main()
{
	char str1[11];
	FILE *in, *out;
	in = fopen("p2input.txt", "r");
	out = fopen("p2output.txt", "w");
	fscanf(in, "%s", &str1);
	fclose(in);
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (str1[i] >= 48 && str1[i] <= 57)
		{
			count++;
		}
	}
	fprintf(out, "kazu=%d A1968274", count);
	fclose(out);
}