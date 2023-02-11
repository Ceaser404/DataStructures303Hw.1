#include <iostream>
#include <fstream>
#include <iomanip> 
#include <string>
#include "arrayManip.h"

using namespace std;

int main()
{
    // create an object, array1, of class arrayManip
    arrayManip array1;
    // Call the class method, findInteger, to check if an integer exists within 
    // the array and return its index if within the array.
    array1.findInteger();
    // Call the class method, modifyInteger, to multiply an integer of the 
    // user's choice by 10
    array1.modifyInteger();


    // Class method, addInteger(), adds integer of users choice to end of array
    array1.addInteger();
    // Call method, displayArray(), to check if .addInteger worked.
    array1.displayArray();
    // Class method .deleteInteger() deletes the index specified by user and 
    // shifts and shortens the array accordingly
    array1.deleteInteger();
    // check if .deleteInteger worked.
    array1.displayArray();

    return 0;
}