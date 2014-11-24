#ifndef RETURNS_H
#define RETURNS_H

#include "Media.h"
#include "Customer.h"
using namespace std;

// make static so
// only 1 borrow object
// used in the whole program

class Returns {

public:
	Returns();
	bool performAction(Customer&, Media&);
private:
	//
};

#endif
