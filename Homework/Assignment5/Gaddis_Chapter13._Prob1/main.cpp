/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on May 10, 2017, 2:59 PM
 */

#include <cstdlib>

#include <iostream>
#include <iomanip>
using namespace std;
#include "Date.h"
/*
 * 
 */
int main(int argc, char** argv) {
Date formats;   //Define instance of Date class
    
    //Get user input
    formats.getInput();
    
    //Printing the dates in the corresponding formats
    cout << "\nHere is the date in three different formats:" << endl;
    formats.allNumbers();
    formats.monthFirst();
    formats.dayFirst();
    cout << endl;
    return 0;
}

