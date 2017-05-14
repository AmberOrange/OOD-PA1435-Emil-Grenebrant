#include "Item.h"

Item::Item()
{
}

std::string Item::getString()
{
	return this->name;
}

ITEM Item::getItemType()
{
	return this->type;
}

int Item::getPower()
{
	return this->power;
}
