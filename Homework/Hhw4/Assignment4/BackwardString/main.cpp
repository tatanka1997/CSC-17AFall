/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on April 2, 2017, 11:54 AM
 */

#include <iostream>
using namespace std;



//Function Prototypes
void revS2(char *, int); //function to output the reverse of a string

//Executable code begins here! Always begins in Main
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=40; //size is enough to Enter up to a line of characters
    char strng[SIZE]; //array of characters (c-string)
    
    //Input Values
    cout<<"Input up to "<<SIZE-1<<" characters : "<<endl; //input characters (reserve last one for null)
    cin.getline(strng, SIZE); //get the input of the characters
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"You entered: "<<strng<<endl; //SHow what the user entered
    cout<<"Reversed is "; 
    revS2(strng, SIZE); //output the reversed string
    cout<<endl; 
    
    //Exit stage right! - This is the 'return 0' call
    return 0;
}

//function to output a reversed string
void revS2(char *str, int size){
    int temp=0; //temp since i is local in the for loop
    for (int i=0; str[i]!='\0'&&i<size;i++){ //go through loop until either max array size or hit null char
        temp=i; //counter set to i 
    }
    for (int i=temp;i>=0;i--){
        cout<<str[i];
    }
    cout<<endl;
}
