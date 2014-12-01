#include "Command.h"

Command::Command() {
    cmdName = "";
}

Command::~Command() {
    //
}

void Command::setName(const string value) {
    //
    cmdName = value;
}

string Command::getName() const {
    return cmdName;
}