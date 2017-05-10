#pragma once
#ifndef USABLE_H
#define USABLE_H

#include "IItem.h"

class Usable : public IItem
{
private:
	virtual void generate() = 0;

public:
	virtual ~Usable();

	virtual bool use(IItem** item) = 0;
	virtual void display() = 0;
};

#endif
