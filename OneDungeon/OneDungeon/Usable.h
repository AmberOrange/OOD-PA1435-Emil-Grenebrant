#pragma once
#ifndef USABLE_H
#define USABLE_H

#include "IItem.h"

class Usable : public IItem
{
private:


public:
	Usable();
	virtual ~Usable();

	virtual void generate();
	virtual bool use(IItem* item);
};

#endif
