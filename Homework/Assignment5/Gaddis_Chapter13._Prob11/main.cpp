/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on May 10, 2017, 3:13 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
#include "Payroll.h"
/*
 * 
 */
int main(int argc, char** argv) {
int size = 7;             //Number of employees
    Payroll employee[size];   //Object array for the employees
    float rate;               //Hourly pay rate for each employee
    float hours;              //Hours worked during the week for each employee
    
    //Loop to get the employee's pay info
    for(int i = 0; i < size; i++)
    {
        cout << "\nEnter the hourly pay rate of employee " << i+1 << ": ";
        cin >> rate;
        employee[i].getRate(rate);
        cout << "Enter the hours worked for the week: ";
        cin >> hours;
        while(hours > 60)
        {
            cout << "\nInvalid input. Hours cannot exceed 60!" << endl;
            cout << "Enter the hours worked for the week: ";
            cin >> hours;
        }
        employee[i].getHours(hours);
    }
    
    //Loop to print the gross pay earned for each employee
    for(int i = 0; i < size; i++)
    {
        cout << "\nEmployee " << i+1 << " earned a gross pay of: $";
        cout << employee[i].printTotal();
    }
    
    cout << endl << endl;
    return 0;
}

