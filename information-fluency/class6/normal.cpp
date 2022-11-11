#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::string answer, s;

	std::cin >> s;

	bool start = false;
	for (const auto &ch : s)
	{
		if (start)
		{
			std::cout << (char)tolower(ch);
		}
		if (ch == '.')
		{
			start = true;
		}
	}

	if (!start)
	{
	std:
		std::cout << "n/a";
	}
}