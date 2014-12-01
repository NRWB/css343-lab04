#include "Customers.h"

Customers::Customers() {
    //
}

void Customers::setData(ifstream& inputFile) {
    if (inputFile == NULL)
        return;
    if (!inputFile) {
        // could not open the selected file.
        return;
    }
    for (;;) { // customers setup data from file loop

        // setData stuff

        if (inputFile.eof()) {
            // break, we reached the end of the file
            break;
        }

    }
}