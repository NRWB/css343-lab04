#ifndef MEDIA_H
#define MEDIA_H

#include <fstream>
#include <iostream>

using namespace std;

#include "MediaFactory.h"

/*
	#include SOME FORM OF BST
*/

class Media {

public:
    Media();
    void setData(ifstream&);
private:
	//
};

#endif