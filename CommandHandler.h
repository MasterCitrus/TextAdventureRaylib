#pragma once
#include "Player.h"

#include <chrono>
#include <string>

class Player;

class CommandHandler
{
public:
	CommandHandler();
	~CommandHandler();

	//Handle User Input
	void UpdateInput(Player* _player);
	std::string GetInput() const;

	bool GetInputActive();

	//Commands
	void Quit();

private:
	std::string input;
	bool isBackspacing = false;
	bool inputActive = true;
	std::chrono::high_resolution_clock::time_point backspaceHoldStart;
	std::chrono::high_resolution_clock::time_point backspaceRepeatStart;
};

