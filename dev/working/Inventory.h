#ifndef INVENTORY_H
#define INVENTORY_H

#include "Command.h"

class Inventory : Command {

public:
	Inventory();
    virtual ~Inventory();
    virtual void setName(const string);
    virtual string getName() const;
private:
	//
};

#endif
