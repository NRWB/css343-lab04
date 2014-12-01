#include "Customers.h"

Customers::Customers() {
    // do not need to construct anything
}

Customers::~Customers() {
    clientele.clear();
}

// used:
// http://www.cplusplus.com/reference/string/string/string/
// http://stackoverflow.com/questions/8683302/how-to-split-a-space-separated-string-into-multiple-strings-in-c
// http://www.cplusplus.com/reference/sstream/stringstream/stringstream/
// http://stackoverflow.com/questions/13551911/read-text-file-into-string-c-ifstream
// http://www.cplusplus.com/reference/istream/istream/get/
void Customers::setData(ifstream& inputFile) {
    if (!inputFile) // could not open the selected file.
        return;

    // need to handle case, for when there IS NONE or no data in text file...

    int customerID;
    string customerFirstName;
    string customerLastName;

    for (;;) { // customers setup data from file loop

        // setData stuff
        inputFile >> customerID;

        if (inputFile.eof()) { // break, we reached the end of the file
            break;
        }

        string tmp; // get rest of line (first and last name)
        getline(inputFile, tmp);

        stringstream ssBuff(tmp); // parse the first and last name into separate strings
        
        ssBuff >> customerFirstName;
        ssBuff >> customerLastName;

        Customer tempUser = Customer(customerID, customerFirstName, customerLastName);

        clientele.insert(std::pair<int, Customer>(customerID, tempUser));

    }
}

// only need to call it->second, as that calls the customer's output,
// and if it->first was called, the customer's ID would be displayed twice.
// (stuck with the customer outputting id and name, as opposed to just name)
void Customers::display() const {
    map<int, Customer>::const_iterator it;
    for (it = clientele.begin(); it != clientele.end(); ++it)
        cout << it->second << endl;
}

/*
// first/initial coded display method version
void Customers::display() const {
    for (std::map<int, Customer>::const_iterator it = clientele.begin(); it != clientele.end(); ++it)
        std::cout << it->first << " => " << it->second << endl;
}
*/
