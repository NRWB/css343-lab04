#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include "Customer.h"

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <map>
using namespace std;

class Customers {

public:
	Customers();
    ~Customers();
    void setData(ifstream&);
    void display() const;
private:
    map<int, Customer> clientele; // customer id, is a key of type int and maps to a unique customer
};

#endif
