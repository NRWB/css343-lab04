#ifndef HISTORY_H
#define HISTORY_H

#include "Command.h"

#include <vector>
using namespace std;

class History : Command {

public:
	History();
    virtual ~History();
    virtual void setName(const string);
    virtual string getName() const;

    void add(string);
    
private:
    // int = key (just go 0, 1, 2, 3 ... n ?
    // string = value - the name of a media item
    vector<string> entries;
};

#endif
