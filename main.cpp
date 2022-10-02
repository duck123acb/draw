#include "raylib.h"
#include <vector>
#include "Pixel.hpp"

void setup()
{
}

std::vector<Pixel> pixels = {};

int main()
{
	// starts a raylib window
	InitWindow(800, 600, "Draw");
	
	// limits FPS to monitors refresh rate.
	SetWindowState(FLAG_VSYNC_HINT);
	
	// sets up game variables
	setup();
	
	// game code
	while (!WindowShouldClose())
	{
		//** LOGIC **//
		if (IsMouseButtonDown(0))
		{
			pixels.push_back(Pixel(GetMouseX(), GetMouseY(), 10, 10));
		}

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