#ifndef RETURNS_H
#define RETURNS_H

#include "Command.h"

/**
 * Class Name: Returns, singular.
 */
class Returns : Command {

public:
	Returns();
    ~Returns();
    void setName(const string&);
    string& getName() const;

private:
	//
};

#endif
