#include <iostream>
using namespace std;

int main()
{
	string str;
	std::cin >> str;

	string answer;
	char ch;
	int i;
	int len = str.length();
	for (i = 0; i < len; i++)
	{
		if (str[i] == '%')
		{
			int ascii;
			sscanf(str.substr(i + 1, 2).c_str(), "%x", &ascii);
			ch = static_cast<char>(ascii);
			answer += ch;
			i = i + 2;
		}
		else
		{
			answer += str[i];
		}
	}

	std::cout << answer;
}
