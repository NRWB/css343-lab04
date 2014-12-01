#include "MovieRentalStore.h"
#include <fstream>
#include <iostream>

using namespace std;


int main() {
	ifstream infile("data4customers.txt");

	Customers customers;

    customers.setData(infile);

    customers.display();

}