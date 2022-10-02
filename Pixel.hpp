#include "raylib.h"

class Pixel
{
	public:
	float x, y, width, height;

	Pixel(float aX, float aY, float aWidth, float aHeight)
	{
		x = aX;
		y = aY;
		width = aWidth;
		height = aHeight;
	}

	void Draw()
	{
		DrawRectangle(x, y, width, height, RAYWHITE);
	}
};