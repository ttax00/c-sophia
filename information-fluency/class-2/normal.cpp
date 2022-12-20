#include <iostream>

int main()
{
	std::cout << "東京スカイツリーの高さは何 m でしょう？\n";

	int n;

	std::cin >> n;

	if (n == 634)
	{
		std::cout << "正解です。";
	}
	else if (n > 634)
	{
		std::cout << "もっと低いです。";
	}
	else if (n < 634)
	{
		std::cout << "もっと高いです。";
	}
}
