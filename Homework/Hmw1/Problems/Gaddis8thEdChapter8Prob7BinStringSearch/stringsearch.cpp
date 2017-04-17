//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


void prnSAry(string [], int);  //Print the array
void sorSAry (string [], int); //Sort the array by least to most (alpha order)
void swaSRow (string [], int); //Swap items in the array 



int main(int argc, char** argv) {
    //Declare Variables
    const int NUMNAM = 20; //Size of the array
    string names[NUMNAM] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                               "Taylor, Terri", "Johnson, Jill","Allison, Jeff", 
                               "Looney, Joe", "Wolfe, Bill", "James, Jean", 
                               "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", 
                               "Javens, Renee", "Harrison, Rose", 
                               "Setzer, Cathy", "Pike, Gordon", "Holland, Beth" };
    
    //Input Values
    
    //Process by mapping inputs to outputs
    prnSAry(names, NUMNAM);
    sorSAry(names, NUMNAM);
    prnSAry(names, NUMNAM);
    
    //Output Values
    
    //Exit stage right! - This is the 'return 0' call
    return 0;
}

//function to sort the array
void sorSAry (string nam[], int size){
    bool swap;
    do{
        swap=false; //will remain false if nothing swapped in for loop
        for(int i=0;i<size-1;i++){
            if(nam[i]>nam[i+1]){ //compare element and swap if true
                swaSRow(nam,i); //Swap the current element with next element
                swap=true; //set bool to true to initiate another run-through
            }
        }
    }while(swap); 
}

//function to swap rows in the array
void swaSRow (string nam[], int now){
    string temp="";  //temp string used in swapping
    temp=nam[now];  //temp = current item
    nam[now]=nam[now+1];  //current item = next item
    nam[now+1]=temp;  //next item = temp
} 

//Function to print the array
void prnSAry (string nam[], int size){
    cout<<"Num    Name"<<endl;
    for (int i=0;i<size;i++){
        cout<<setw(3)<<i+1<<"    "<<nam[i]<<endl;  //Output the element number and array value
    }
    cout<<endl;;
}
