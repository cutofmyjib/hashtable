/***********************************************************
Name: Diana Lozano
Assignment: 04
Purpose: This is the main cpp file.
***********************************************************/

#include "main.h"

void visit(DoublyLinkedList &list) 
{ 
    list.printList();
}

int main() {

    Hashtable hash;
    cout << "hash should be empty: " << (hash.isEmpty() ? "true" : "false") << endl;

    ifstream file("data.csv");
    string csvline;
    string data;
    string strId;

    if (!file)
        return 0;
    
    while(file.good())
    {
        getline(file, csvline);

        if (csvline != "") 
        {
            int commaPos = csvline.find(","); // comma position
            
            strId = csvline.substr(0, commaPos);
            int id = stoi(strId);

            data = csvline.substr(commaPos + 1, csvline.length());
            
            hash.add(id, data);
        }
    }

    file.close();

    cout << "added some items, hash should not be empty: " << (hash.isEmpty() == false ? "true" : "false") << endl;
    cout << "number of entries: " << hash.getNumberOfEntries()  << endl;

    cout << "________start traverse________" << endl;
    hash.traverse(visit);
    cout << "________end traverse________" << endl;

    DataNode *searchNode = new DataNode();
    
    hash.getValue(941, searchNode);
    cout << "ID: 941 data == 'twentieth one': " << searchNode->data << endl;

    cout << "Removing id 117: " << (hash.remove(117) ? "true" : "false") << endl;
    cout << "Hash table contains id 117: false == " << (hash.contains(117) ? "true" : "false") << endl;
    cout << "Hash table contains id 155: true == " << (hash.contains(155) ? "true" : "false") << endl;
    cout << "number of entries: " << hash.getNumberOfEntries()  << endl;

    cout << "________start traverse________" << endl;
    hash.traverse(visit);
    cout << "________end traverse________" << endl;


    cout << "________clearing hash table________" << endl;
    hash.clear();
    hash.dumpTable();
    
    return 0;
}
