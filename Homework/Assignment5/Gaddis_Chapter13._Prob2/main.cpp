/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on May 10, 2017, 3:02 PM
 */

#include <cstdlib>

#include <iostream>
#include <iomanip>
using namespace std;
#include "Employee.h"


/*
 * 
 */
int main(int argc, char** argv) {
//Object with all the arguments declared
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    
    //Object with only 2 arguments declared(name and ID)
    Employee emp2("Mark Jones", 39119);
    
    //Object with no arguments declared
    Employee emp3;
    
    //Declaring missing arguments using mutator functions
    emp2.getDepartment("IT");
    emp2.getPosition("Programmer");
    
    emp3.getName("Joy Rogers");
    emp3.getId(81774);
    emp3.getDepartment("Manufacturing");
    emp3.getPosition("Engineer");
    
    //Printing employees data
    cout << "\nEmployee 1:" << endl;
    cout << "Name:       " << emp1.printName() << endl;
    cout << "ID:         " << emp1.printId() << endl;
    cout << "Department: " << emp1.printDepartment() << endl;
    cout << "Position:   " << emp1.printPosition() << endl;
    cout << "\nEmployee 2:" << endl;
    cout << "Name:       " << emp2.printName() << endl;
    cout << "ID:         " << emp2.printId() << endl;
    cout << "Department: " << emp2.printDepartment() << endl;
    cout << "Position:   " << emp2.printPosition() << endl;
    cout << "\nEmployee 3:" << endl;
    cout << "Name:       " << emp3.printName() << endl;
    cout << "ID:         " << emp3.printId() << endl;
    cout << "Department: " << emp3.printDepartment() << endl;
    cout << "Position:   " << emp3.printPosition() << endl;
    cout << endl;
    return 0;
}

