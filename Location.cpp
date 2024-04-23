#include "Location.h"

Location::Location() {}

Location::Location(std::string _name, std::string _description) : name{ _name }, description{ _description } {}

Location::~Location() {}

std::string Location::GetName() const
{
	return name;
}

std::string Location::GetDescription() const
{
	return description;
}

void Location::AddRoom(Room* room)
{
	rooms.push_back(room);
}