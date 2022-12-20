#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<float> pumpkins;
	float weight;

	while (true)
	{
		std::cin >> weight;
		if (weight >= 0)
		{
			pumpkins.push_back(weight);
		}
		else
		{
			break;
		}
	}

	float sum;
	for (const auto &weight : pumpkins)
	{
		sum += weight;
	}

	std::cout << "合計の個数: " << pumpkins.size() << "\n";

	std::cout << "合計の重さ: " << sum << "\n";

	std::cout << "平均の重さ: " << sum / pumpkins.size() << "\n";

	std::sort(pumpkins.begin(), pumpkins.end());

	std::cout << "最大の重さ: " << pumpkins[pumpkins.size() - 1] << "\n";
	std::cout << "最小の重さ: " << pumpkins[0] << "\n";
}