#include "raylib.h"

void setup()
{
}

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
		
		//** DRAWING **//
		// starts drawing the scene
		BeginDrawing();
		
		ClearBackground(BLACK);
		
		DrawFPS(10, 10);
		
		// end the drawing of the scene
		EndDrawing();
	}
	
	// stops the raylib window
	CloseWindow();
	
	return 0;
}