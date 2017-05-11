/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on May 10, 2017, 3:06 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
#include "Widget.h"
/*
 * 
 */
int main(int argc, char** argv) {
Widget order;        //Widget object declaration
    float orderNumber;   //Number of widgets ordered
    
    //Getting input using the mutator functions
    cout << "\nHow many widgets have been ordered? ";
    cin >> orderNumber;
    while(orderNumber < 0)
    {
        cout << "\nInvalid input!" << endl;
        cout << "\nHow many widgets have been ordered? ";
        cin >> orderNumber;
    }
    order.getWidgets(orderNumber);
    
    //Printing the result using the accessor function
    cout << "\nThe manufacturing plant will take ";
    cout << order.getDays() << " days to manufacture that amount of widgets";
    cout << endl << endl;
    return 0;
}

