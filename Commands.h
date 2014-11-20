#ifndef COMMANDS_H
#define COMMANDS_H

#include <fstream>
#include <iostream>

using namespace std;

#include "Borrow.h"
#include "Returns.h"
#include "Inventory.h"
#include "History.h"

class Commands {

public:
	Commands();
    void setData(ifstream&);
private:
	//
};

#endif
