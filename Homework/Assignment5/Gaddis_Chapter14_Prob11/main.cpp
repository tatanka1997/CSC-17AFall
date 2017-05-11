/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on May 10, 2017, 3:23 PM
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
    FeetInches first; 

    // Get a distance from the user. 
    cout <<"\nThis program uses a copy constructor to create a copy of a class"
            "object.\nThen the program will use the overload * operator to"
            "multiply both objects and display the result." << endl << endl;
    cout << "Enter a distance in feet and inches: "; 
    cin >> feet >> inches; 
    
    // Store the distance in first. 1
    first.setFeet(feet); 
    first.setInches(inches); 
    
    //Creating the copy
    FeetInches second(first);
    
    //Multiplying the objects
    FeetInches third = first * second;
    
    cout <<"\nThe multiplication of the original object and the copy is: ";
    cout << third.getFeet() << " feet " << third.getInches() << " inches";
    
    cout << endl << endl;
    return 0;
}

