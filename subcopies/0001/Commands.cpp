#include "Commands.h"

Commands::Commands() {
    //
}

void Commands::setData(ifstream& inputFile) {
    if (inputFile == NULL)
        return;
    if (!inputFile) {
        // could not open the selected file.
        return;
    }
    for (;;) { // commands setup data from file loop

        // setData stuff

        if (inputFile.eof()) {
            // break, we reached the end of the file
            break;
        }

    }
}