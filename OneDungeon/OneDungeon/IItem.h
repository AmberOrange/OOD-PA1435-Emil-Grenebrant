#pragma once
#ifndef IITEM_H
#define IITEM_H

#include "IPlayer.h"

class IItem
{
public:
	virtual ~IItem() {};

	virtual void generate() = 0;
	virtual bool use(IPlayer* player) = 0;
};

#endif
