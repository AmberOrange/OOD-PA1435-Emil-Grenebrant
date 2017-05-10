#ifndef IITEM_H
#define IITEM_H
#include <string>
//#include "IPlayer.h"
class IItem
{
public:
	virtual ~IItem() {};

	virtual void generate() = 0;
	virtual bool use() = 0;
};

#endif
