#ifndef BORROW_H
#define BORROW_H

#include "Command.h"

class Borrow : Command {

public:
	Borrow();
    virtual ~Borrow();
    virtual void setName(const string);
    virtual string getName() const;

private:
	//
};

#endif
