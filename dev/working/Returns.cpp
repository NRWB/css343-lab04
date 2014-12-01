#include "Returns.h"

Returns::Returns() {
    //
}

Returns::~Returns() {
    //
}

void Returns::setName(const string value) {
    cmdName = value;
}

string Returns::getName() const {
    return cmdName;
}
