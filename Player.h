#pragma once
#include "Character.h"
#include "Item.h"
#include "Location.h"


class Player : public Character
{
public:
	Player();
	//Player(params);
	~Player();

	void SetLocation(Location* location);
	void SetRoom(Room* room);
	Location* GetLocation();
	Room* GetRoom();
private:
	Location* currentLocation;
	Room* currentRoom;
	//std::vector<Item> inventory;
};

