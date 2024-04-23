#include "Player.h"

Player::Player() {}

//Player::Player(params) {}

Player::~Player() {}

void Player::SetLocation(Location* location)
{
	currentLocation = location;
}

void Player::SetRoom(Room* room)
{
	currentRoom = room;
}

Location* Player::GetLocation()
{
	return currentLocation;
}

Room* Player::GetRoom()
{
	return currentRoom;
}