#include "Inventory.h"

Inventory::Inventory() {
    //
}

Inventory::~Inventory() {
    //
}

void Inventory::setName(const string value) {
    cmdName = value;
}

string Inventory::getName() const {
    return cmdName;
}
