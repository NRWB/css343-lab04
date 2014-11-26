#ifndef MOVIE_RENTAL_STORE_H
#define MOVIE_RENTAL_STORE_H

#include "Customers.h"
#include "MediaCollection.h"
#include "Commands.h"

class MovieRentalStore : Customers, Commands, MediaCollection {
	
public:
	MovieRentalStore();
    void setData(ifstream&, ifstream&, ifstream&);
private:
	Customers clientele;
    Commands transactions;
    MediaCollection mediaCollection; // the 3 bst's for each media (comedy, classic, drama)
};

#endif
