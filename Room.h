#pragma once
#include "GameObject.h"

#include <map>
#include <string>
#include <vector>

class Room
{
public:
	Room();
	Room(std::string _name, std::string _description);
	~Room();

	std::string GetName() const;
	std::string GetDescription() const;

	void AddObject(GameObject* object);
	void RemoveObject(GameObject* object);

	void ConnectRooms(Room* room1, Room* room2, const std::string& exit);

private:
	std::string name;
	std::string description;
	std::vector<GameObject*> objects;
	std::map<std::string, Room*> connectedRooms;
};

