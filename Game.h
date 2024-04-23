#pragma once
#include "CommandHandler.h"
#include "Location.h"

class Game
{
public:
	Game();
	~Game();

	//Initialisation and Updating
	void Init();
	void Update();
	void Draw();

private:
	std::vector<Location*> locations;
	CommandHandler* handler = nullptr;
};


