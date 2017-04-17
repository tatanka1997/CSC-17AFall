
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    const float EURRATE=0.95f; //Exchange rate 1 dollar for Euro 2/21/2017
    const float YENRATE=113.55f; //Exchange rate 1 dollar to Jpy Yen 2/21/2017
    float usValY=0.0f;
    float usValE=0.0f;
    float eurVal=0.0f;
    float yenVal=0.0f;
    
    //Input Values
    cout<<"How much US currency would you like to convert to Japanese Yen? "<<endl;
    cin>>usValY;  //Get amount of US currency to convert to Yen
    cout<<"How much US currency would you like to convert to Euro currency? "<<endl;
    cin>>usValE; //Get amount of US currency to converto to Euro
    
    //Process by mapping inputs to outputs
    yenVal=usValY*YENRATE; //Amount of Yen for the US amount
    eurVal=usValE*EURRATE; //Amount of Euro for US amount
    
    //Output values
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"$"<<usValY<<" is worth ¥"<<yenVal<<endl; //output the US->YEN conversion
    cout<<"$"<<usValE<<" is worth €"<<eurVal<<endl; //output the US->EURO conversion
    
    
    
    //Exit stage right! - This is the 'return 0' call
    return 0;
}
