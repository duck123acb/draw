#include "raylib.h"
#include <vector>
#include "Pixel.hpp"

// for testing
// #include <iostream>

std::vector<Pixel> pixels;
float pixelSize;

void clear()
{
	pixels.clear();
}

// void pixelSizeUp(float amt)
// {
// 	pixelSize += amt;
// }

// void pixelSizeDown(float amt)
// {
// 	pixelSize += amt;
// }

int main()
{
	// starts a raylib window
	InitWindow(800, 600, "Draw");
	
	// limits FPS to monitors refresh rate.
	SetWindowState(FLAG_VSYNC_HINT);
	
	// game code
	while (!WindowShouldClose())
	{
		//** LOGIC **//
		if (IsMouseButtonDown(0))
		{
			pixels.push_back(Pixel(GetMouseX(), GetMouseY(), pixelSize));
		}

		if (IsKeyDown(KEY_C)) clear();

		pixelSize += GetMouseWheelMove();
		if (pixelSize < 1)
		{
			pixelSize = 1;
		}

		// std::cout << GetMouseWheelMove() << "\n";

		//** DRAWING **//
		// starts drawing the scene
		BeginDrawing();
		
		ClearBackground(BLACK);
		
		DrawFPS(10, 10);

		for (int i = 0; i < pixels.size(); i++)
		{
			pixels[i].Draw();
		}
		
		// end the drawing of the scene
		EndDrawing();
	}
	
	// stops the raylib window
	CloseWindow();
	
	return 0;
}