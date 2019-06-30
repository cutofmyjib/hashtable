/***********************************************************
Name: Diana Lozano
Assignment: 04
Purpose: This is the main cpp file.
***********************************************************/

#include "main.h"

int main() {

    Hashtable hash;
    hash.add(100, "test");
    hash.add(233, "test");

    hash.add(108, "test");


    hash.dumpTable();
    return 0;
}