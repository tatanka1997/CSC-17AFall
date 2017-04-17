/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on April 3, 2017, 10:57 AM
 */

//System Libraries
#include <iostream>
using namespace std;


int ctwd3(char *, int); //function to count the words in a string

//Executable code begins here! Always begins in Main
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=200; //size is enough to Enter up to a line of characters
    char strng[SIZE]; //array of characters (c-string)
    
    //Input Values
    cout<<"Enter prefered  words, up to "<<SIZE-1<<" total characters : "<<endl; //input characters (reserve last one for null)
    cin.getline(strng, SIZE); //get the input of the characters
    
    
    cout<<"You entered "<<ctwd3(strng, SIZE)<<" words. "<<endl; //count the words 
    
    //Exit stage right! - This is the 'return 0' call
    return 0;
}

//function to output a reversed string
int ctwd3(char *str, int size){
    int temp=1; //temp since i is local in the for loop
    for (int i=0; str[i]!='\0'&&i<size;i++){ //go through loop until either max array size or hit null char
        if (str[i]==' '&&str[i+1]!=' ') temp++; //sequential whitespaces not counted as more words
    }
    return temp;
}