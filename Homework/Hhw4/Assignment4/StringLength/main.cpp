/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on April 2, 2017, 10:49 AM
 */

#include <iostream>
using namespace std;

//User Libraries



//Function Prototypes
int cntS1(char [], int); //function to count the length of a c-string


int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=40; //size is enough to Enter up to a line of characters
    char strng[SIZE]; //array of characters (c-string)
    
    //Input Values
    cout<<"Input up to "<<SIZE-1<<" characters : "<<endl; //input characters (reserve last one for null)
    cin.getline(strng, SIZE); //get the input of the characters
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"You entered: "<<strng<<endl;
    cout<<"The string is " <<cntS1(strng, SIZE)<<" characters long "<<endl; //output the number of characters in the string
    
    //Exit stage right! - This is the 'return 0' call
    return 0;
}

//function to count the length of a c-string
int cntS1(char str[], int size){
    int temp=0; //temp since i is local in the for loop
    for (int i=0; str[i]!='\0'&&i<size;i++){ //go through loop until either max array size or hit null char
        temp=i+1; //counter set to i 
    }
    if (str[0]=='\0') temp=0;
    return temp; //return the value of the for loop
}