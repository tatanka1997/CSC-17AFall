/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on May 10, 2017, 3:09 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
#include "PersonalInfo.h"

/*
 * 
 */
int main(int argc, char** argv) {
string name;      //Variable to get the user name
    string address;   //Variable to get the user address
    int age;          //Variable to get the user age
    string phone;     //Variable to get the user phone number
    
    //Declaring class objects
    PersonalInfo person1;
    PersonalInfo person2;
    PersonalInfo person3;
    
    //Getting user input and storing data using the function mutators
    cout << "\nEnter your name: ";
    cin.ignore();
    getline(cin, name);
    person1.getName(name);
    cout << "Enter your address: ";
    getline(cin, address);
    person1.getAddress(address);
    cout << "Enter your age: ";
    cin >> age;
    person1.getAge(age);
    cout << "Enter your phone number: ";
    cin >> phone;
    person1.getPhone(phone);
    
    cout << "\nEnter your friends name: ";
    cin.ignore();
    getline(cin, name);
    person2.getName(name);
    cout << "Enter your friends address: ";
    getline(cin, address);
    person2.getAddress(address);
    cout << "Enter your friends age: ";
    cin >> age;
    person2.getAge(age);
    cout << "Enter your friends phone number: ";
    cin >> phone;
    person2.getPhone(phone);
    
    cout << "\nEnter your second friends name: ";
    cin.ignore();
    getline(cin, name);
    person3.getName(name);
    cout << "Enter your second friends address: ";
    getline(cin, address);
    person3.getAddress(address);
    cout << "Enter your second friends age: ";
    cin >> age;
    person3.getAge(age);
    cout << "Enter your second friends phone number: ";
    cin >> phone;
    person3.getPhone(phone);
    
    //Printing the information using the accessor function
    cout << endl;
    cout << person1.printName()<<" Information:" << endl;
    cout << "Address:      "     <<person1.printAddress() << endl;
    cout << "Age:          "         <<person1.printAge() << endl;
    cout << "Phone number: "<<person1.printPhone() << endl;
    
    cout << endl;
    cout << person2.printName()<<" Information:" << endl;
    cout << "Address:      "     <<person2.printAddress() << endl;
    cout << "Age:          "         <<person2.printAge() << endl;
    cout << "Phone number: "<<person2.printPhone() << endl;
    
    cout << endl;
    cout << person3.printName()<<" Information:" << endl;
    cout << "Address:      "     <<person3.printAddress() << endl;
    cout << "Age:          "         <<person3.printAge() << endl;
    cout << "Phone number: "<<person3.printPhone() << endl;
    
    cout << endl;
    return 0;
}

