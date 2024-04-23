#include "Room.h"

Room::Room() {}

Room::Room(std::string _name, std::string _description) : name{_name}, description{_description} {}

Room::~Room() {}

std::string Room::GetName() const
{
	return name;
}

std::string Room::GetDescription() const
{
	return description;
}

void Room::AddObject(GameObject* object)
{
	objects.push_back(object);
}

void Room::RemoveObject(GameObject* object)
{
	
}

void Room::ConnectRooms(Room* room1, Room* room2, const std::string& exit)
{

}
