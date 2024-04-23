#pragma once
#include <string>

class GameObject
{
public:
	GameObject();
	GameObject(std::string _name, std::string _description);
	~GameObject();

	std::string GetName() const;
	std::string GetDescription() const;
	static bool Compare(const GameObject* object1, const GameObject* object2);
protected:
	std::string name;
	std::string description;
};

