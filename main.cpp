/***********************************************************
Name: Diana Lozano
Assignment: 04
Purpose: This is the main cpp file.
***********************************************************/

#include "main.h"

int main() {

    Hashtable hash;
    
    cout << "hash should be empty: " << (hash.isEmpty() ? "true" : "false") << endl;
    
    hash.add(100, "test");
    hash.add(233, "test");
    hash.add(108, "test");

    cout << "added some items, hash should not be empty: " << (hash.isEmpty() == false ? "true" : "false") << endl;

    cout << "number of entries == 3: " << (hash.getNumberOfEntries() == 3 ? "true" : "false") << endl;
    return 0;
}