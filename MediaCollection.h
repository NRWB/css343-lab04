#ifndef MEDIA_COLLECTION_H
#define MEDIA_COLLECTION_H

#include "AbstractMedia.h"
#include <vector>
#include <map>
using namespace std;

class MediaCollection : AbstractMedia {
	
public:
	MediaCollection();
private:

    // still need to figure out the BST implementation
    // need to map a media type of genre or something?
    vector< map < string, AbstractMedia > > mymap;
};

#endif
