#include "CommandHandler.h"
#include "Utilities.h"

#include <raylib.h>

CommandHandler::CommandHandler() {}

CommandHandler::~CommandHandler() {}

void CommandHandler::UpdateInput()
{
	char key = GetCharPressed();

	if (key >= 32 && key <= 125)
	{
		input.push_back(key);
	}

	if (IsKeyDown(KEY_BACKSPACE))
	{
		if (!isBackspacing)
		{
			isBackspacing = true;
			backspaceHoldStart = std::chrono::high_resolution_clock::now();
			backspaceRepeatStart = std::chrono::high_resolution_clock::now();

			if (!input.empty()) input.pop_back();
		}
		else
		{
			std::chrono::high_resolution_clock::time_point now = std::chrono::high_resolution_clock::now();
			auto durationHold = std::chrono::duration_cast<std::chrono::milliseconds>(now - backspaceHoldStart).count();
			auto durationRepeat = std::chrono::duration_cast<std::chrono::milliseconds>(now - backspaceRepeatStart).count();

			if (durationHold > 200)
			{
				if (durationRepeat > 50)
				{
					if (!input.empty()) input.pop_back();
					backspaceRepeatStart = std::chrono::high_resolution_clock::now();
				}
			}
		}
	}
	else isBackspacing = false;

	if (IsKeyPressed(KEY_ENTER))
	{
		if (inputActive == true)
		{
			if (ToLower(input) == "quit")
			{
				input.clear();
				Quit();
			}
			else if (ToLower(input) == "test")
			{
				inputActive = false;
				input.clear();
			}
			else input.clear();
		}
		else if (inputActive == false) inputActive = true;
	}
}

std::string CommandHandler::GetInput() const
{
	return input;
}

bool CommandHandler::GetInputActive()
{
	return inputActive;
}

void CommandHandler::Quit()
{
	!WindowShouldClose();
}