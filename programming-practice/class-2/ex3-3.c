#include <stdio.h>

main()
{
	int i;
	float f;
	char c;
	double d;
	printf("Input char:\n");
	scanf("%c", &c);
	printf("Input int:\n");
	scanf("%d", &i);
	printf("Input real:\n");
	scanf("%f", &f);
	printf("Input double:\n");
	scanf("%lf", &d);

	printf("\n");
	printf("%c\n", c);
	printf("%d\n", i);

	printf("%f\n", f);
	printf("%lf\n", f);
	printf("%20.9lf\n", f);

	printf("%f\n", d);
	printf("%lf\n", d);
	printf("%20.9lf\n", d);
	printf("%20.9f\n", d);
}