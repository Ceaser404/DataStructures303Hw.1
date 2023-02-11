#include <iostream>
#include <fstream>
#include <iomanip> 
#include <string>
#include <conio.h>
#include <limits.h>
#include "arrayManip.h"
 
using namespace std;

void arrayManip::setSize(int size) {
    sum = size;
}
// value of sum will need to be set from this file, so return sum
int arrayManip::getSize() {
    return sum;
}

// .findInteger prompts user, checks the input, and outputs location of number
void arrayManip::findInteger() {
    int find;
    cout << "What integer do you want to search for? " << endl;
    cin >>find;
    cout << sum;
    string errorMessage = "Program terminated: Non-numerical entry.";
    try {
        if (!cin) {
            throw errorMessage;
        }

    } catch (string errorMessage) {
        cout << errorMessage << endl;
        abort();
    }
    for (int i = 0; i < sum; i++) {
        if (array[i] == find) {
            found = i;
            cout << endl << "The number exists in the array at index: " << found << endl;
            break;
        }
        if (i == (sum - 1)) {
            cout << endl << "The number does not exist in the array." << endl;
            break;
        }
    }
}


void arrayManip::searchTheArray() {
    for (int i = 0; i < sum; i++) {
        if (array[i] == find) {
            found = i;
            cout << endl << "The number exists in the array at index: " << found << endl;
            break;
        }
        if (i == (sum) - 1) {
            cout << endl << "The number does not exist in the array." << endl;
        }
    }
}

// .modifyInteger prompts user, checks the input, and outputs the input and 
// modified output
void arrayManip::modifyInteger() {
    string errorMessage = "Program terminated: Non-numerical entry.";
    cout << "What integer would you like to modify? " << endl; 
   
    cin >>find;
    
    try {
        if (!cin) {
            throw errorMessage;
        }
    } catch (string errorMessage) {
        cout << errorMessage << endl;
        abort();
    }    
    for (int i = 0; i < sum; i++) {
        if (array[i] == find) {
            found = i;
            cout << endl << "The number exists in the array at index: " << found << endl;
            break;
        }
        if (i == (sum) - 1) {
            cout << endl << "The number does not exist in the array." << endl;
        }
    }
    //cout << "found: " << found << endl;
    cout << "The old number is: " << array[found] << endl;
    array[found] = array[found] * 10;
    cout << "The new number is: " << array[found] << endl;
}

//adds integer to end of array if the input is numerical
void arrayManip::addInteger() {
    string errorMessage = "Program terminated: Non-numerical entry.";
    int addVal;
    cout << "Please choose an integer to add to the end of the array: " << endl; 
    cin >>addVal;
    cout << "SumFirst: " << sum << endl;    
    sum = sum + 1;
    array[sum - 1] = addVal;
      
    try {
        if (!cin) {
            throw errorMessage;
        }
    } catch (string errorMessage) {
        cout << errorMessage << endl;
        abort();
    }
}

// method .displayArray() iterates through the array, outputting each value

void arrayManip::displayArray() {
    cout << "The array: " << endl;
    cout << "The sum: " << sum << endl;
    for (int i = 0; i < sum; i++) {
        cout << ' ' << array[i];
    }
    cout << endl;
}

// input of .deleteInteger should be the index
void arrayManip::deleteInteger() {
    int ind;
    cout<<"Enter index to be deleted\n";  //4
    cin>>ind;
    
    // 
    if(ind<0 || ind>=sum)  //5
    {
        cout<<"Invalid\n";
        abort();
    }
    else
    {
        //array gets shifted back using for loop, filling in removed index value
        for(int i=ind;i<sum;i++)
        {
            array[i]=array[i+1];
        }
        //array should be empty at index of sum, due to array shift.
        array[sum]={};
    }
    sum = sum - 1;
    cout << endl << "Size of array after deletion: " << sum << endl;
}


// An array will be stored in each arrayManip() object
arrayManip::arrayManip()
{
    int number;

    ifstream fin;
    ofstream fout;
    
    
    fin.open("InputFile.txt");
    
    if (!fin)
        cout << "Unable to open files." << endl;    
    cout << "The array from the input file: " << endl;  
    // fin is > number so long as there is input (fin not being NULL)
    while(fin>>number) {
        // Decided to show the user the array of InputFile values
        cout << number << ' ';
        array[i] = number;
        i++;
        // sets the size of the array
        sum++;
    }    
    cout << endl;
}