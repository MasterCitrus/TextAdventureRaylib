#include "Game.h"

#include <raylib.h>

Game::Game()
{
	this->Init();
}

Game::~Game() {}

void Game::Init()
{
	handler = new CommandHandler;
	player = new Player;
	Room* bridge = new Room("Bridge", "This is the bridge.");
	Room* cic = new Room("Combat Information Center", "This is the combat information center.");
	bridge->ConnectRooms(cic, "south");
	cic->ConnectRooms(bridge, "north");
	Location* spaceship = new Location("Spaceship", "This is the spaceship.");
	spaceship->AddRoom(bridge);
	spaceship->AddRoom(cic);
	player->SetLocation(spaceship);
	player->SetRoom(bridge);
}

void Game::AddLocation(Location* location)
{
	locations.push_back(location);
}

void Game::Update()
{
	handler->UpdateInput(player);
}

void Game::Draw()
{
	BeginDrawing();

	ClearBackground(BLACK);
	
	//Description Area
	DrawText((player->GetLocation()->GetName() + " | " + player->GetRoom()->GetName()).c_str(), 20, 20, 20, WHITE);

	//Input Area
	if (handler->GetInputActive() == true)
	{
		//DrawText(("> " + handler->GetInput()).c_str(), 20, GetScreenHeight() - 30, 20, WHITE);
		int inputStartX = 20;
		if (MeasureText(("> " + handler->GetInput()).c_str(), 20) > GetScreenWidth() - 40)
		{
			inputStartX -= MeasureText(("> " + handler->GetInput()).c_str(), 20) - (GetScreenWidth() - 40);
		}
		std::string displayInput = handler->GetInput();
		if (displayInput.length() > GetScreenWidth() - 20)
		{
			displayInput = displayInput.substr(displayInput.length() - GetScreenWidth() - 20);
		}
		DrawText(("> " + displayInput).c_str(), inputStartX, GetScreenHeight() - 30, 20, WHITE);
	}
	else DrawText("Press 'Enter' to continue.", 20, GetScreenHeight() - 30, 20, WHITE);

	EndDrawing();
}