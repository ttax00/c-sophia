#include <iostream>
#include <cmath>
#include <vector>
#include <string>

#include <numeric>

// 整数 x が min 以上 max 以下の場合 true, それ以外の場合 false を返す関数

// 二次元座標 (x1, y1), (x2, y2) のマンハッタン距離を返す関数

// double 型の配列 v の要素の平均を返す関数

// 文字 ch を大文字にして返す関数

// 文字列 s をすべて大文字にした文字列を返す関数

bool InRange(int i, int min, int max)
{
	return (min <= i && i <= max);
}

float ManhattanDistance(float a, float b, float c, float d)
{
	return std::abs(a - c) + std::abs(b - d);
}

float Mean(std::vector<double> v)
{
	return std::accumulate(v.begin(), v.end(), 0.0) / v.size();
}

std::string ToUpper(std::string s)
{
	int i;
	std::string newS;
	for (i = 0; i < s.length(); i++)
	{
		const char c = toupper(s[i]);
		newS.append(&c);
	}
	return newS;
}

char ToUpper(char c)
{
	return toupper(c);
}
int main()
{
	std::cout << std::boolalpha;
	std::cout << InRange(-5, 0, 100) << '\n';
	std::cout << InRange(0, 0, 100) << '\n';
	std::cout << InRange(30, 0, 100) << '\n';
	std::cout << InRange(100, 0, 100) << '\n';
	std::cout << InRange(101, 0, 100) << '\n';

	std::cout << "--------\n";

	std::cout << ManhattanDistance(0.0, 0.0, 10.0, 10.0) << '\n';
	std::cout << ManhattanDistance(5.0, 2.0, 3.0, 6.0) << '\n';
	std::cout << ManhattanDistance(-5.5, -2.6, 10.2, -8.5) << '\n';

	std::cout << "--------\n";

	std::vector<double> v1 = {1.0, 2.0, 3.0};
	std::vector<double> v2 = {5.5, 0.3, -1.2, 6.0, 4.4, 10.1};
	std::cout << Mean(v1) << '\n';
	std::cout << Mean(v2) << '\n';

	std::cout << "--------\n";

	std::cout << ToUpper('a') << '\n';
	std::cout << ToUpper('z') << '\n';
	std::cout << ToUpper('X') << '\n';
	std::cout << ToUpper('?') << '\n';

	std::cout << "--------\n";

	std::cout << ToUpper("sophia") << '\n';
	std::cout << ToUpper("e-mail") << '\n';
	std::cout << ToUpper("Web") << '\n';
	std::cout << ToUpper("IT") << '\n';
}