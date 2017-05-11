/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on May 10, 2017, 3:21 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
#include "FeetInches.h"
/*
 * 
 */
int main(int argc, char** argv) {
int feet, inches; // To hold input for feet and inches  

    // Create two FeetInches objects. The default arguments 
    // for the constructor will be used. 
    FeetInches first, second; 

    // Get a distance from the user. 
    cout << "Enter a distance in feet and inches: "; 
    cin >> feet >> inches; 
    
    // Store the distance in first. 1
    first.setFeet(feet); 
    first.setInches(inches); 

    // Get another distance. 23 
    cout << "Enter another distance in feet and inches: "; 
    cin >> feet >> inches; 

    // Store the distance in second. 
    second.setFeet(feet); 
    second.setInches(inches); 

    cout << endl;
    
    // Compare the two objects. 
    if (first <= second) 
    cout << "first is less or equal to second.\n"; 
    if (first >= second) 
    cout << "first is greater or equal to second.\n"; 
    if (first != second) 
    cout << "first is not equal to second.\n"; 
    
    cout << endl;
    return 0;
}

