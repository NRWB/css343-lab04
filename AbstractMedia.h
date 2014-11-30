#ifndef ABSTRACT_MEDIA_H
#define ABSTRACT_MEDIA_H

#include <fstream>
#include <iostream>

using namespace std;

class AbstractMedia {
public:
    AbstractMedia();

    virtual ~AbstractMedia();

    virtual void setData(ifstream&);

protected: // when classes inherit from AbstractMedia, they get the generic data members from here too
    int stock;
    string director;
    string title;
    string abstractDate; // maybe change into a small hierachy of AbstractDate, and have two sub classes, "AbstractDate::Date" and "AbstractDate::Date::LeadRole"

};

#endif









/*
	#include SOME FORM OF BST
*/

// We have to use a template here, even though instructor wants limited
// template usage due to homework assignment being based on inheritance.
// This is due to allowing the inheriting class/classes create a media
// genre vector of their own desired type.

//template <typename M, typename G>

// For example, may have a medium of Media, M, (DVD, VHS, Blue-Ray, etc)
// as well as a genre category for that medium of media.

//class AbstractMedia {



//public:

    //AbstractMedia();

    // we have to make a virtual destructor to free the memory in the latter
    // of classes that inherit from this AbstractMedia factory class.
    //virtual ~AbstractMedia();

    // don't actually implement the setData, so leave this defined here,
    // and don't this abstract method into the AbstractMedia.cpp src file.
    //virtual void setData(ifstream&) = 0;

//private:

	// the intended use is for a media factory to use this abstract class
    // and use it to store a type/genre of media.
    //vector<T> mediaGenre;

//};

//#endif