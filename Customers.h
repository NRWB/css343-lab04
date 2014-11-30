#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include "Customer.h"

#include <fstream>
#include <iostream>
#include <map>
using namespace std;

class Customers {

public:
	Customers();
    void setData(ifstream&);
private:
    map<Customer> clientele;
};

#endif
