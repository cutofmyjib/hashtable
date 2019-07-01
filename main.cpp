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

    cout << "Removing id 100: " << (hash.remove(100) ? "true" : "false") << endl;
    cout << "number of entries == 2: " << (hash.getNumberOfEntries() == 2 ? "true" : "false") << endl;

    cout << "Hash table contains id 100: false == " << (hash.contains(100) ? "true" : "false") << endl;
    cout << "Hash table contains id 108: true == " << (hash.contains(108) ? "true" : "false") << endl;
    hash.dumpTable();
    cout << "------------ clearing hash table ------------" << endl;
    hash.clear();
    hash.dumpTable();
    
    DataNode *searchNode = new DataNode();
    hash.getValue(108, searchNode);
    cout << "searchNode data: " << searchNode->data << endl;
    
    return 0;
}