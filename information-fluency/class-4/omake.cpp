#include <iostream>
#include <random>

int rand(int a, int b)
{
	std::random_device rd;
	return std::uniform_int_distribution<int>{a, b}(rd);
}

int main()
{
	int num;
	scanf("%d", &num);
	int i, j;
	for (i = 1; i <= num; i++)
	{
		printf("%d\t", i);
		for (j = 2; j <= num; j++)
		{
			printf("%d\t", i * j);
		}
		printf("\n");
	}
}