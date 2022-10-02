#include "raylib.h"

class Pixel
{
public:
	float x, y, size;

	Pixel(float aX, float aY, float aSize)
	{
		x = aX;
		y = aY;
		size = aSize;
	}

	void Draw()
	{
		DrawRectangle(x, y, size, size, RAYWHITE);
	}
};