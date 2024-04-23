#include "Character.h"

Character::Character() {}

Character::Character(std::string _name, std::string _description, int _HP, int _DEF, int _ATK) : GameObject(_name, _description), HP{ _HP }, DEF{ _DEF }, ATK{ _ATK }
{

}

Character::~Character() {}