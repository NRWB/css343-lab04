#ifndef HISTORY_H
#define HISTORY_H

#include <vector>
using namespace std;

class History {

public:
	History();
    ~History();
    void add(string);
    void remove(string);
private:
    // int = key (just go 0, 1, 2, 3 ... n ?
    // string = value - the name of a media item
    vector<string> entries;
};

#endif
