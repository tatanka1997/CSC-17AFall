/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on April 3, 2017, 3:21 PM
 */

#include <iostream>
#include <cctype> //for character library functions
using namespace std;


//Function Prototypes
void cpwd6(char [], int); //function to convert first word of sentence to upper case

//Executable code begins here! Always begins in Main
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=200; //size is enough to Enter up to a line of characters
    char strng[SIZE]; //array of characters (c-string)
    
    //Input Values
    cout<<"Enter some words, up to "<<SIZE-1<<" total characters  "<<endl; //input characters (reserve last one for null)
    cin.getline(strng, SIZE); //get the input of the characters
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"Here is the string with first word of a sentence capitalized: "<<endl;
    cpwd6(strng, SIZE); //call function to capitalize the first words of sentence
    cout<<strng<<endl;
    
    //Exit stage right! - This is the 'return 0' call
    return 0;
} 

//function to output a reversed string
void cpwd6(char str[], int size){
    int c=0;
    while (!isalnum(str[c])){ //find first character of string 
        c++;
    }
    if (islower(str[c])){ //capitalize first character if it's a lower case letter
        str[c]-=32;
    } //capitalize first letter of string if not already
    
    for (int i=0; str[i]!='\0'&&i<size;i++){ //go through loop until either max array size or hit null char
        if (str[i]=='.'||str[i]=='!'||str[i]==':'||str[i]=='?'||str[i]==';') { //find punctuation that requires capitalization
            int j=i;
            do {
                j++;
            } while (!isalpha(str[j])); //find the next character after punctuation mark
            if (islower(str[j])){ //capitalize it if it's a lower case letter
                str[j]-=32;
            }
            i=j; //pick up in loop from here
        }
    }
}
