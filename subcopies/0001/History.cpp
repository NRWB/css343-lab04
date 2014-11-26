#include "History.h"

// http://stackoverflow.com/questions/6573225/what-requirements-must-stdmap-key-classes-meet-to-be-valid-keys


History::History() {
}

History::~History() {
    entries.clear();
}

void History::add(string entry) {
    entries.push_back(entry);
}

void History::remove(string removalEntry) {

    entries.erase( remove( begin(entries), entries.end(), removalEntry ), std::end(entries) );

    //entries.erase(remove(entries.begin(), entries.end(), removalEntry), entries.end());
//    m.erase(
//
//    int index = 0;
//    for (int i = 0; i < entries.size(); i++) {
//        if (entries.c
//    std::vector<int> vec;
//// .. put in some values ..
//int int_to_remove = n;
//vec.erase(std::remove(vec.begin(), vec.end(), int_to_remove), vec.end());
}