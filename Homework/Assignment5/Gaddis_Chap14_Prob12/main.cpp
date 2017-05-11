/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on May 10, 2017, 3:26 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
#include "LandTract.h"
/*
 * 
 */
int main(int argc, char** argv) {
int feet, inches; // To hold input for feet and inches  

  
    LandTract land;   //Object to use with the FeetInches class
    
    // Get a distance from the user. 
    cout << "Enter the length in feet and inches of the land: "; 
    cin >> feet >> inches; 
    land.getLength(feet, inches);
    
    cout << "Enter the width in feet and inches of the land: "; 
    cin >> feet >> inches; 
    land.getWidth(feet, inches);
    
    land.printArea();
    cout << endl;
    return 0;
}

