#include "Customer.h"

Customer::Customer() {
    //
}

Customer::~Customer() {
    //
}

Customer::Customer(int cID, string cFirst, string cLast) {
    ID = cID;
    firstName = cFirst;
    lastName = cLast;
}

ostream& operator<<(ostream& output, const Customer& nd) {
    output << nd.ID;
    output << " " << nd.lastName.c_str();
    output << " " << nd.firstName.c_str();
	return output;
}