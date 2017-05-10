#pragma once
#ifndef IITEM_H
#define IITEM_H
#define ITEM_ARMOR_DR 20
#define ITEM_WEAPON_DR 20
#define ITEM_HPPOT_DR 60

#include <cstdlib>

enum ITEM { ARMOR, WEAPON, HPPOT };

class IItem
{
public:
	virtual ~IItem() {};

	virtual bool use(IItem* item) = 0;
	virtual void display() = 0;
};

#endif
