#ifndef COMMAND_H
#define COMMAND_H

#include <fstream>
#include <iostream>
using namespace std;

class Command {
public:
	Command();
    virtual ~Command();
    virtual void setName(const string);
    virtual string getName() const;
protected:
	string cmdName;
};

#endif
