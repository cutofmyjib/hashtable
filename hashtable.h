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
using std::cout;
using std::endl;

#define TABLESIZE 19

class Hashtable {
public:
    Hashtable();
    ~Hashtable();
    bool add(int id, string data);
    void clear();
    bool contains(int id);
    int getNumberOfEntries();
    bool getValue(int targetId, DataNode *returnNode);
    bool isEmpty();
    void dumpTable();
    bool remove(int targetId);
    void traverse(void visit(DoublyLinkedList&));

private:
    int hashFunction(int id);
    DoublyLinkedList *linkedListArray;
};


#endif //HASH_TABLE_H