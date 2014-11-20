#include "Media.h"

Media::Media() {
    //
}


void Media::setData(ifstream& inputFile) {
    if (inputFile == NULL)
        return;
    if (!inputFile) {
        // could not open the selected file.
        return;
    }
    for (;;) { // media setup data from file loop

        // setData stuff

        if (inputFile.eof()) {
            // break, we reached the end of the file
            break;
        }

    }
}