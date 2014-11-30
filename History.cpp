#include "History.h"

History::History() {
    //
}

History::~History() {
    entries.clear();
}

void History::setName(const string& value) {
    cmdName = value;
}

string& History::getName() const {
    return cmdName;
}

void History::add(string entry) {
    entries.push_back(entry);
}

