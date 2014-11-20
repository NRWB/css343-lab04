#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include <fstream>
#include <iostream>

using namespace std;

#include "Customer.h"

class Customers {

public:
	Customers();
    void setData(ifstream&);
private:
	//
};

#endif
