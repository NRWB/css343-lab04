#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "History.h"

class Customer {
    friend ostream & operator<<(ostream &, const Customer &);
public:
	Customer();
    ~Customer();
    Customer(int, string, string); // id, first name, last name
    void setData(int, string, string); // id, first name, last name
    void add(string); // add an entry to their personal checkout history
private:
    int ID;
    string firstName;
    string lastName;
    History personalHistory;
	//
};

#endif
