#include "Item.h"

Item::Item() {}

Item::Item(bool _canPickup) : canPickup{ _canPickup } {}

Item::~Item() {}

void Item::Pickup()
{

}

void Item::Use()
{

}

bool Item::GetPickup() const
{
	return canPickup;
}