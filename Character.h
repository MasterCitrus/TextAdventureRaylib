#pragma once
#include "GameObject.h"

class Character : public GameObject
{
public:
	Character();
	Character(std::string _name, std::string _description, int _HP, int _DEF, int _ATK);
	~Character();

protected:
	int HP;
	int DEF;
	int ATK;
};

