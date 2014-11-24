#ifndef BORROW_H
#define BORROW_H

#include "Media.h"
#include "Customer.h"
using namespace std;

// make static so
// only 1 borrow object
// used in the whole program

class Borrow {

public:
	Borrow();
	bool performAction(Customer&, Media&);
private:
	// 
};

#endif
