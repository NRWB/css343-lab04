#include "MovieRentalStore.h"

MovieRentalStore::MovieRentalStore() {
    //
}

void MovieRentalStore::setData(ifstream& customerInputFile, ifstream& commandsInputFile, ifstream& storeDatabaseInputFile) {
    if (customerInputFile == NULL || commandsInputFile == NULL || storeDatabaseInputFile == NULL)
        return;
    if (!customerInputFile || !commandsInputFile || !storeDatabaseInputFile) {
        // could not open the selected file.
        return;
    }

    // customer loop
    for (;;) {

        // setData stuff

        if (customerInputFile.eof()) {
            // break, we reached the end of the file
            break;
        }

    }

    // commands loop
    for (;;) {

        // setData stuff

        if (commandsInputFile.eof()) {
            // break, we reached the end of the file
            break;
        }

    }

    // database loop
    for (;;) {

        // setData stuff

        if (storeDatabaseInputFile.eof()) {
            // break, we reached the end of the file
            break;
        }

    }

}