#include <stdio.h>

bool isPrime(int i)
{
	if (i == 1)
	{
		return true;
	}
	for (int y = 2; y < i; y++)
	{
		if (i % y == 0)
		{
			return false;
		}
	}
	return true;
}

void findPrime(int n)
{
	if (isPrime(n))
	{
		printf("prime: %d", n);
		return;
	}
	else
	{
		findPrime(n + 1);
	}
}

main()
{
	int n;
	printf("enter n:\n");
	scanf("%d", &n);
	findPrime(n);
}