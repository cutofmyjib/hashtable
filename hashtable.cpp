/***********************************************************
Name: Diana Lozano
Assignment: 04
Purpose: This is where all the hashtable functions are defined.
x■ isEmpty(): boolean -- Sees whether this dictionary is empty.
x■ getNumberOfEntries(): integer -- Gets the number of items in this dictionary.
x■ add(int id, string data): boolean -- Inserts an item into this dictionary according to the item’s search key.
x■ remove(int targetId): boolean -- Removes the item with the given search key from this dictionary.
x■ clear(): void -- Removes all entries from this dictionary.
■ getValue(int searchKey) -- Gets an item with a given search key from this dictionary
x■ contains(int targetId): boolean -- Sees whether this dictionary contains an item with a given search key.
■ traverse(visit(item: ItemType): void): void -- Traverses this dictionary and calls a given client function once for each item.
***********************************************************/
#include "hashtable.h"
#include "linkedlist.h"

//CONSTRUCTOR
Hashtable::Hashtable()
{
    linkedListArray = new DoublyLinkedList[TABLESIZE];
}  

//DESTRUCTOR
Hashtable::~Hashtable()
{
   
}

int Hashtable::hashFunction(int id) 
{
    return id % TABLESIZE;
}

bool Hashtable::add(int id, string data)
{
    int hashedId = hashFunction(id);
    bool isAdded = linkedListArray[hashedId].addNode(id, data);
    return isAdded;
}

void Hashtable::clear()
{
    for (int i = 0; i < TABLESIZE; i++) {
        
        linkedListArray[i].clear();
    }
}

bool Hashtable::contains(int id)
{
    DataNode *searchNode = new DataNode();
    int hashedId = hashFunction(id);
    bool isFound = linkedListArray[hashedId].getNode(id, searchNode);
    return isFound;
}

int Hashtable::getNumberOfEntries()
{
    int count = 0;

    for (int i = 0; i < TABLESIZE; i++) {
        count += linkedListArray[i].getCount();
    }
    return count;
}

bool Hashtable::isEmpty()
{
    for (int i = 0; i < TABLESIZE; i++) {
        
        if (linkedListArray[i].getCount() != 0)
        {
            return false;
        }
    }
    return true;
}

void Hashtable::dumpTable() 
{
    for (int i = 0; i < TABLESIZE; i++) {

        if (linkedListArray[i].getCount() > 0) {
            linkedListArray[i].printList();
        } else {
            cout << "not used" << endl;
        }
    }
}

bool Hashtable::remove(int targetId) 
{
    int hashedId = hashFunction(targetId);
    bool isRemoved = linkedListArray[hashedId].deleteNode(targetId);
    return isRemoved;    
}
