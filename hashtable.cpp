/***********************************************************
Name: Diana Lozano
Assignment: 04
Purpose: This is where all the hashtable functions are defined.
■ isEmpty(): boolean -- Sees whether this dictionary is empty.
■ getNumberOfEntries(): integer -- Gets the number of items in this dictionary.
■ add(int id, string data): boolean -- Inserts an item into this dictionary according to the item’s search key.
■ remove(int targetId): boolean -- Removes the item with the given search key from this dictionary.
■ clear(): void -- Removes all entries from this dictionary.
■ getValue(int searchKey) -- Gets an item with a given search key from this dictionary
■ contains(int targetId): boolean -- Sees whether this dictionary contains an item with a given search key.
■ traverse(visit(item: ItemType): void): void -- Traverses this dictionary and calls a given client function once for each item.
***********************************************************/
#include "hashtable.h"
#include "linkedlist.h"

//CONSTRUCTOR
Hashtable::Hashtable()
{
    linkedListArray = new DoublyLinkedList[TABLESIZE];
};  

//DESTRUCTOR
Hashtable::~Hashtable()
{
   
}

bool Hashtable::add(int id, string data)
{
    linkedListArray[0].addNode(id, data);
    linkedListArray[0].printList(); // test
    return true;
}

