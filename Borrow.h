#ifndef BORROW_H
#define BORROW_H

#include "Command.h"

class Borrow : Command {

public:
	Borrow();
    ~Borrow();
    void setName(const string&);
    string& getName() const;

private:
	//
};

#endif
