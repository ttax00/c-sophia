#include <iostream>

struct Rect
{
	int width = 0;
	int height = 0;

	void draw() const
	{
		draw('#');
	}

	void draw(char c) const
	{
		for (int i = 0; i < height; i++)
		{
			for (int y = 0; y < width; y++)
			{
				printf("%c", c);
			}
			printf("\n");
		}
	}
};

int main()
{
	Rect{6, 2}.draw();

	Rect{4, 4}.draw();

	Rect{3, 6}.draw('*');

	Rect rect{1, 1};

	rect.draw();

	rect.width = 2;

	rect.height = 2;

	rect.draw('*');
}