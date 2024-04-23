#pragma once
#include "CommandHandler.h"
#include "Location.h"
#include "Player.h"

class Game
{
public:
	Game();
	~Game();

	//Initialisation and Updating
	void Init();
	void Update();
	void Draw();

	//Locations
	void AddLocation(Location* location);

private:
	std::vector<Location*> locations;
	CommandHandler* handler = nullptr;
	Player* player;
};


