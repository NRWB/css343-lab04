#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "History.h"

class Customer {

public:
	Customer();
    ~Customer();
    Customer(int, string, string); // id, first name, last name
    void setData(int, string, string); // id, first name, last name
    void add(string); // add an entry to their personal checkout history
    void remove(int); // remove based off an index
    void remove(string); // remove based off a string
private:
    int ID;
    string firstName;
    string lastName;
    History personalHistory;
	//
};

#endif
