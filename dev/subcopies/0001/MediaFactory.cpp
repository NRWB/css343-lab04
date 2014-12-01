#include "MediaFactory.h"

MediaFactory::MediaFactory() {
    commandsMap = vector<char>(MAX_ALPHABET_CHARS_ALLOWED, '\0'); // initializes the vector with 26 nulls
    commandsMap.push_back('C'); // classic
    commandsMap.push_back('F'); // comedy
    commandsMap.push_back('D'); // drama
}