#include "GameObject.h"

GameObject::GameObject() {}

GameObject::GameObject(std::string _name, std::string _description) : name{ _name }, description{ _description } {}

GameObject::~GameObject() {}

std::string GameObject::GetName() const
{
	return name;
}

std::string GameObject::GetDescription() const
{
	return description;
}

bool GameObject::Compare(const GameObject* object1, const GameObject* object2)
{
	return object1->GetName() > object2->GetName();
}