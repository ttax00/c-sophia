#include <iostream>
#include <random>

int rand(int a, int b)
{
	std::random_device rd;
	return std::uniform_int_distribution<int>{a, b}(rd);
}

int main()
{
	std::cout << "分と秒を整数で入力\n";
	int min, sec;
	scanf("%d %d", &min, &sec);

	while (min > 0 || sec > 0)
	{
		if (sec >= 10)
		{
			printf("%d:%d\n", min, sec);
		}
		else
		{
			printf("%d:0%d\n", min, sec);
		}
		if (sec == 0 && min > 0)
		{
			min -= 1;
			sec = 60;
		}
		sec -= 1;
	}
	printf("0:00\n終わり\n");
}