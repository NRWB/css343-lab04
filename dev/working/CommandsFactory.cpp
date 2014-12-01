#include "CommandsFactory.h"

//static definition, for ease in adding types of commands
CommandsFactory::CommandsFactory() {
    characterMap = vector<char>(MAX_ALPHABET_CHARS_ALLOWED, '\0'); // initializes the vector with 26 nulls

    // below are 4 types of commands to be used 
    characterMap.push_back('H'); // history
    characterMap.push_back('I'); // inventory
    characterMap.push_back('B'); // borrow
    characterMap.push_back('R'); // returns
}



  //  vector<char>::iterator it;

  //  it = characterMap.begin();

  //  it = characterMap.insert(it, 'c');

  //  characterMap.insert(it, 2, 300);

  //  it = myvector.begin();
  //it = myvector.insert ( it , 200 );

  //myvector.insert (it,2,300);



  //  characterMap.insert('c');


/*
CommandsFactory::CommandsFactory() {
    // creates a vector of 26 characters, all defaulting to NULL
    //characterMap = vector<char>(ALPHABET_CHAR_COUNT, NULL);
    
    // do we want a full set every time?
    // or do we want to only use what we need.

    
}
*/


/*

for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
    std::cout << ' ' << *it;

    */