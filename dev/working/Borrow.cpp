#include "Borrow.h"

Borrow::Borrow() {
    //
}

Borrow::~Borrow() {
    //
}

void Borrow::setName(const string value) {
    cmdName = value;
}

string Borrow::getName() const {
    return cmdName;
}
