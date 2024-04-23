#pragma once
#include "Room.h"

class Location
{
public:
	Location();
	Location(std::string _name, std::string _description);
	~Location();

	std::string GetName() const;
	std::string GetDescription() const;

	void AddRoom(Room* room);

private:
	std::string name;
	std::string description;
	std::vector<Room*> rooms;
};

