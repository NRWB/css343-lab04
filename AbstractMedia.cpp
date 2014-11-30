#include "AbstractMedia.h"

AbstractMedia::AbstractMedia() {
    //
}

AbstractMedia::~AbstractMedia() {
    //
}


void AbstractMedia::setData(ifstream& inputFile) {
    if (inputFile == NULL)
        return;

    if (!inputFile) // could not open the selected file.
        return;

    for (;;) { // media setup data from file loop

        // setData stuff

        if (inputFile.eof()) {
            // break, we reached the end of the file
            break;
        }

    }

}