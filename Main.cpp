#include "Game.h"

#include <iostream>
#include <raylib.h>

int main() 
{
	//std::cout << "Screen Size set\n";
	const int screenWidth = 800;
	const int screenHeight = 450;
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	//std::cout << "Make window\n";
	InitWindow(screenWidth, screenHeight, "Untitled Text Adventure");

	SetTargetFPS(60);

	//Setup game stuff
	//std::cout << "Game class setup\n";
	Game game;
	
	//Game Loop
	while (!WindowShouldClose())
	{
		//std::cout << "Updating\n";
		game.Update();

		//std::cout << "Drawing\n";
		game.Draw();
	}

	//std::cout << "Window closed\n";
	CloseWindow();
}