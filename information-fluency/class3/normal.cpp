#include <iostream>
#include <random>

int rand(int a, int b)
{
	std::random_device rd;
	return std::uniform_int_distribution<int>{a, b}(rd);
}

int main()
{
	std::cout << "モンスターがあらわれた！\n";
	int monster_hp = 50;
	int player_hp = 100;
	for (;;)
	{
		std::cout << "モンスターの HP: " << monster_hp << "\n";
		std::cout << "あなたの HP: " << player_hp << "\n";
		std::cout << "何をする？ [1] たたかう [2] なにもしない [3] にげる\n";

		int action;
		std::cin >> action;

		if (action == 1)
		{
			int dmg = rand(0, 20);
			std::cout << "モンスターを剣で攻撃！" << dmg << " ダメージを与えた！\n";
			monster_hp -= dmg;
		}
		else if (action == 2)
		{
			std::cout << "だれをまっているの？\n";
		}
		else
		{
			std::cout << "勇者は戦いから逃げるなんて。。。";
			break;
		}

		int dmg = rand(10, 20);
		std::cout << "モンスターから " << dmg << " ダメージを受けた！\n";
		player_hp -= dmg;

		if (monster_hp <= 0 || player_hp <= 0)
		{
			if (monster_hp <= 0)
			{
				std::cout << "モンスターを倒した!\n";
			}
			if (player_hp <= 0)
			{
				std::cout << "あなたのHPがなくなった！\n";
				std::cout << "敗北。。。\n";
			}
			break;
		}
	}
}