#include "History.h"

History::History() {
    //
}

History::~History() {
    entries.clear();
}

void History::setName(const string value) {
    cmdName = value;
}

string History::getName() const {
    return cmdName;
}

void History::add(string entry) {
    entries.push_back(entry);
}

// look at :
// http://www.cplusplus.com/reference/map/map/begin/
// http://www.algolist.net/Data_structures/Hash_table/Simple_example