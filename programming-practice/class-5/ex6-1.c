#include <stdio.h>

main()
{
	int i, j, m;
	m = -9999;
	for (i = 0; i < 5; i = i + 1)
	{
		scanf("%d", &j);
		if (j > m)
		{
			m = j;
		}
	}
	printf("max= %d\n", m);
}