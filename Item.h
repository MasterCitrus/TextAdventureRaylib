#pragma once
#include "GameObject.h"

class Item : public GameObject
{
public:
	Item();
	Item(bool _canPickup);
	~Item();

	virtual void Pickup() = 0;
	virtual void Use() = 0;

	bool GetPickup() const;
protected:
	bool canPickup;
};