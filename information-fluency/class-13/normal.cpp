#include <Siv3D.hpp>
#include <cmath>

class PowerUp
{
public:
	int cost;
	int count = 0;
	RectF btn;
	Font fontH1 = Font(30), fontH2 = Font(20), fontH3 = Font(15);
	String lable;

	PowerUp(int cost, int height, String lable) : cost(cost), btn(20, height, 150, 50), lable(lable) {}

	void buy()
	{
		count++;
	}

	float effect()
	{
		if (count == 0)
		{
			return 1;
		}
		else
		{
			float cumulation = 2;
			for (int i = 1; i <= count; i++)
			{
				cumulation += log(i);
			}
			return cumulation;
		}
	}

	void draw(int current)
	{
		if (current < cost)
		{
			btn.draw(Palette::Gray);
		}
		else
		{
			btn.draw(ColorF(0.8, 0.2, 0.2));
		}
		fontH2(lable).draw(30, btn.y + 10);
		fontH2(U"$ ", cost).draw(180, btn.y + 10);
	}
};

float round2nd(float f)
{
	return round(f * 100.0) / 100.0;
}
void Main()
{
	Font fontH1(30), fontH2(20), fontH3(15);

	int cookieCount = 0;
	Texture cookieTex(Emoji(U"🍪"));

	PowerUp clickPower(50, 140, U"Click Power"), autoClicker(500, 200, U"Auto Clicker");

	Timer timer{1s, StartImmediately::Yes};

	while (System::Update())
	{
		fontH1(U"Cookies: ", round2nd(cookieCount)).draw(20, 20);

		// Cookie handler
		fontH2(U"Power: ", round2nd(clickPower.effect())).draw(450, 370);
		fontH2(U"Cookie/s: ", round2nd(autoClicker.count * clickPower.effect())).draw(450, 400);
		if (Circle{500, 300, 70}.leftClicked())
		{
			cookieTex.drawAt(500, 290);
			cookieCount += clickPower.effect();
		}
		else
		{
			cookieTex.drawAt(500, 300);
		}

		// Shop
		fontH1(U"Shop").draw(20, 70);

		// Click Power
		clickPower.draw(cookieCount);
		if (clickPower.btn.leftClicked())
		{
			if (cookieCount >= clickPower.cost)
			{
				cookieCount -= clickPower.cost;
				clickPower.buy();
			}
		}

		// Auto Clicker
		autoClicker.draw(cookieCount);
		if (autoClicker.btn.leftClicked())
		{
			if (cookieCount >= autoClicker.cost)
			{
				cookieCount -= autoClicker.cost;
				autoClicker.buy();
			}
		}

		if (timer.reachedZero())
		{
			timer.restart();
			if (autoClicker.count > 0)
			{
				cookieCount += clickPower.effect() * autoClicker.count;
			}
		}
	}
}
