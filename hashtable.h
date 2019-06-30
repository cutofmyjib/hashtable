/***********************************************************
Name: Diana Lozano
Assignment: 04
Purpose: This is the hash table header file.
***********************************************************/

#include <iostream>     /* cout, endl */
#include "linkedlist.h"

//this is a directive that prevents .h files from being included more than once
#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <string>
using std::string;


#define TABLESIZE 19

class Hashtable {
public:
    Hashtable();
    ~Hashtable();
    bool add(int id, string data);
    void dumpTable();

private:
    int hashFunction(int id);
    DoublyLinkedList *linkedListArray;
};


#endif //HASH_TABLE_H