#include "Game.h"

#include <raylib.h>

Game::Game()
{
	this->Init();
}

Game::~Game() {}

void Game::Init()
{
	handler = new CommandHandler();
}

void Game::Update()
{
	handler->UpdateInput();
}

void Game::Draw()
{
	BeginDrawing();

	ClearBackground(BLACK);
	
	//Description Area
	DrawText("Test area", 20, 20, 20, WHITE);

	//Input Area
	if (handler->GetInputActive() == true)
	{
		DrawText(("> " + handler->GetInput()).c_str(), 20, GetScreenHeight() - 30, 20, WHITE);
	}
	else DrawText("Press 'Enter' to continue.", 20, GetScreenHeight() - 30, 20, WHITE);

	EndDrawing();
}