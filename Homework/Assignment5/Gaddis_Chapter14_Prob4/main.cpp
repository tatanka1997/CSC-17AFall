/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on May 10, 2017, 3:17 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
#include "NumDays.h"
/*
 * 
 */
int main(int argc, char** argv) {
float hours = 0; //User input hours

    //Request user input
    cout << "Enter the hours for shift 1: ";
    cin >> hours;
    NumDays shift1(hours);
    cout << "Enter the hours for shift 2: ";
    cin >> hours;
    NumDays shift2(hours);

    //Printing days of work
    cout << endl;
    cout << shift1.getHour() << " hours is " << shift1.getDay() 
         << " days of work." << endl;
    cout << shift2.getHour() << " hours is " << shift2.getDay() 
         << " days of work." << endl;
    
    //Addition operator
    NumDays shift3 = shift1 + shift2;
    cout << "\nThe sum of shift 1 and 2 is: " << shift3.getDay();

    //Subtraction operator
    shift3 = shift1 - shift2;
    cout << "\nThe substraction of shift 1 and 2 is: " << shift3.getDay();

    cout << endl;
    
    //Prefix ++ operator
    ++shift3;
    cout<<"\nPrefix ++ is: "<<shift3.getDay();

    //Postfix ++ operator
    shift3++;
    cout<<"\nPostfix ++ is: "<<shift3.getDay();

    //Prefix -- operator
    --shift3;
    cout<<"\nPrefix -- is: "<<shift3.getDay();

    //Postfix -- operator
    shift3--;
    cout<<"\nPostfix -- is: "<<shift3.getDay();

    cout << endl << endl;
    return 0;
}

