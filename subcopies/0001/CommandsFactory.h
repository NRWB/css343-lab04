#ifndef COMMANDS_FACTORY_H
#define COMMANDS_FACTORY_H

#include <vector>

#define MAX_ALPHABET_CHARS_ALLOWED 26

using namespace std;

class CommandsFactory {
	
public:
    CommandsFactory(); // take the chars to be inputted, and the size of the char array
    ~CommandsFactory();
private:
    vector<char> characterMap;
};

#endif
