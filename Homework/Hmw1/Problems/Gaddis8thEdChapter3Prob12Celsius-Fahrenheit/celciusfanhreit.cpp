#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    float fahTemp, celTemp;
    
    //Input Values
    cout<<"This program will convert Celsius to Fahrenheit."<<endl;
    cout<<"What is the temperature in Celsius?"<<endl;
    cin>>celTemp;
    
    //Process by mapping inputs to outputs
    fahTemp = celTemp * 9 / 5 + 32;
    
    //Output values
    cout<<setprecision(2)<<fixed;
    cout<<celTemp<<" degrees Celsius is the same as"<<endl;
    cout<<fahTemp<<" degrees in Fahrenheit."<<endl;
    
    //Exit stage right! - This is the 'return 0' call
    return 0;
}

ht! - This is the 'return 0' call
