#ifndef RETURNS_H
#define RETURNS_H

#include "Command.h"

/**
 * Class Name: Returns, singular.
 */
class Returns : Command {

public:
	Returns();
    virtual ~Returns();
    virtual void setName(const string);
    virtual string getName() const;

private:
	//
};

#endif
