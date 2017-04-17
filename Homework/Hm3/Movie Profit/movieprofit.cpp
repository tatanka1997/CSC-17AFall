/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on March 29, 2017, 10:27 AM
 */

//System Libraries
#include <iostream>  //Input/Output objects


using namespace std; //Namespace used in system library

//User libraries
#include "movieproft.h"

//Global constants

//Function prototypes
void prntMov(MovData);

//Execution begins here
int main(int argc, char** argv) 
{
    //Declare variables
    MovData mov1,mov2;
    
    //Define objects
    mov1={"Avengers","Joss Wheadon",2012,143,220,1519};
    mov2={"The Intouchables","Olivier Nakache",2011,112,9,346};
    
    //Display Output
    prntMov(mov1);
    cout<<endl;
    prntMov(mov2);
    
    //Exit program
    return 0;
}

void prntMov(MovData movie){
    cout<<"Title:   "<<movie.title<<endl;
    cout<<"Directed by "<<movie.drctr<<endl;
    cout<<"Year:    "<<movie.year<<endl;
    cout<<"Runtime: "<<movie.runtm<<" mins."<<endl;
    cout<<"Net Earnings: $"<<movie.grss-movie.bdgt<<'m'<<endl;
}