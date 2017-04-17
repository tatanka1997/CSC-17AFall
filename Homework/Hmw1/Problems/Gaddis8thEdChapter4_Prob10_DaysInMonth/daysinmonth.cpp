#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    int month, year, days;
    
    //Input Values
    cout<<"Enter a month as a number from 1-12: ";
    cin>>month;
    cout<<"Enter a year: ";
    cin>>year;
    
    //Process by mapping inputs to outputs
    days =  (month == 1)?31:
            (month == 3)?31:
            (month == 5)?31:
            (month == 7)?31:
            (month == 8)?31:
            (month == 10)?31:
            (month == 12)?31:
            (month == 4)?30:
            (month == 6)?30:
            (month == 9)?30:
            (month == 11)?30:
            (!(year % 100)&&!(year % 400))?29:
            (!(year % 100)&&!(year % 400))&&(!(year % 4))?29:28;
    
    
    //Output values
    cout<<"That month had "<<days<<" days"<<endl;
    
    
    //Exit stage right! - This is the 'return 0' call
    return 0;
}

