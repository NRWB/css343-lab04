#ifndef MOVIE_RENTAL_STORE_H
#define MOVIE_RENTAL_STORE_H

#include <fstream>
#include <iostream>

using namespace std;

#include "Customers.h"
#include "Media.h"
#include "Commands.h"

class MovieRentalStore {
	
public:
	MovieRentalStore();
    void setData(ifstream&, ifstream&, ifstream&);
private:
	
};

#endif
