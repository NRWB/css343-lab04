#ifndef MEDIAFACTORY_H
#define MEDIAFACTORY_H

#include <vector>
using namespace std;

#define MAX_ALPHABET_CHARS_ALLOWED 26

class MediaFactory {

public:
    MediaFactory();
private:
	vector<char> commandsMap;
};	

#endif
