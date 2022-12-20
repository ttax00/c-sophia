#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	// キー: std::string - 英語
	// 値: std::string - 日本語
	std::unordered_map<std::string, std::string> dictionary;

	// 以下の 3 行は「標準入力を通した登録」ではない点に注意
	dictionary["school"] = "学校";
	dictionary["head"] = "頭";
	dictionary["cat"] = "猫";

	for (;;)
	{
		std::cout << "何をしますか。[1] 一覧 [2] 検索 [3] 登録 [4] 削除 [5] 終了\n>";

		int action;
		std::cin >> action;

		if (action == 1) // 一覧表示
		{
			for (auto &&[key, value] : dictionary)
			{
				std::cout << key << ": " << value << '\n';
			}
		}
		else if (action == 2) // 標準入力を通したデータの検索
		{
			std::cout << "何という単語を調べたいですか\n>";

			std::string key;
			std::cin >> key;

			if (auto search = dictionary.find(key); search != dictionary.end())
			{
				std::cout << "Found: "
						  << search->first << " " << search->second << '\n';
			}
			else
			{
				std::cout << "その単語は登録されていません。\n";
			}
		}
		else if (action == 3)
		{
			std::cout << "Enter key:\n";

			std::string key;
			std::cin >> key;
			std::cout << "Enter value:\n";
			std::string value;
			std::cin >> value;

			dictionary.insert_or_assign(key, value);
		}
		else if (action == 4)
		{
			std::cout << "Enter key to erase:\n";
			std::string key;
			std::cin >> key;
			dictionary.erase(key);
		}
		else if (action == 5)
		{
			break;
		}
	}
}
