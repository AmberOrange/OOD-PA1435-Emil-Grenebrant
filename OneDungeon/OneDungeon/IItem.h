#pragma once
#ifndef IITEM_H
#define IITEM_H

class IItem
{
public:
	virtual ~IItem() {};

	virtual void generate() = 0;
	virtual bool use(Player* player) = 0;
};

#endif