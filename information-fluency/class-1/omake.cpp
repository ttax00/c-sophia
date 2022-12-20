#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string str;
	std::getline(std::cin, str);
	std::stringstream stream(str);
	int sum;
	int product;
	int n;
	while (stream >> n)
	{
		sum += n;
		product *= n;
	}

	if (sum % 2 == 0 && product % 2 == 0)
	{
		std::cout << "和も積も偶数";
	}
	else
	{
		if (sum % 2 == 0)
		{
			std::cout << "和が偶数";
		}
		else if (product % 2 == 0)
		{
			std::cout << "積が偶数";
		}
	}
}