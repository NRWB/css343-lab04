#ifndef INVENTORY_H
#define INVENTORY_H

#include "Command.h"

class Inventory : Command {

public:
	Inventory();
    ~Inventory();
    void setName(const string&);
    string& getName() const;
private:
	//
};

#endif
