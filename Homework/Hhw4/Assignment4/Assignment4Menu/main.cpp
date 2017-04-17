/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on April 5, 2017, 3:24 PM
 */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void p1Ch10();
void p2Ch10 ();
void p3Ch10();
void p4Ch10();
void p5Ch10();
void p1Ch12();
void p2Ch12();
void p3Ch12();
void p5Ch12();
void p9Ch12();
void cpwd6(char [], int);
int cntS1(char [], int);
int ctwd3(char *, int);
int ctwd4(char *, int); //function to count the words in a string
float avgL5(char *, int); //function to return the avg number of letters per word in a string
void revS2(char *, int); //function to output the reverse of a string
int main(int argc, char** argv) {
	srand(time(0));
    int usrIn;
	bool boo = true;
	do{
		cout<<"Assignment 4 Problems"<<endl;
		cout<<"Choose your program"<<endl;
		cout<<"0. Problem 1"<<endl;
		cout<<"1. Problem 2"<<endl;
		cout<<"2. problem 3"<<endl;
		cout<<"3. Problem 4"<<endl;
		cout<<"4. Problem 5"<<endl;
		cout<<"5. Problem 6 "<<endl;
		cout<<"6. Problem 7"<<endl;
		cout<<"7. Problem 8"<<endl;
		cout<<"8. Problem 9"<<endl;
		cout<<"9. Problem 10"<<endl;
		cout<<"Any other, QUIT"<<endl;
		cin>>usrIn;
		switch(usrIn){
			case 0: p1Ch10(); break;   //done
			case 1: p2Ch10(); break;    //done
			case 2: p3Ch10(); break;    //done
			case 3: p4Ch10(); break;     //done
			case 4: p5Ch10(); break;    //done	
			case 5: p1Ch12(); break; //done
			case 6: p2Ch12(); break;	  //done
			case 7: p3Ch12(); break;	  //done
			case 8: p5Ch12(); break;	  //done	  	
			case 9: p9Ch12(); break;	  //done
			default: boo = false; cin.clear(); cin.ignore(); break;
		}
	}while(boo);
    return 0;
}
//==============================================================================
void p5Ch12(){
	ifstream p5;
	string t;
	char a;
	int cnt = 1;
	p5.open("p5.txt");
	while (!p5.eof()){
		if (cnt % 25 == 0){
			cout<<"Continue?[Y/N]"<<endl;
			cin>>a;
			if (a != 'y') {
				break;
			}
		} 
		getline(p5, t);
		cout<<cnt<<" "<< t << endl;
		cnt++;
	}
}

//==============================================================================
void p2Ch12(){
	ifstream p2;
	string t;
	char a;
	int cnt=0;
	p2.open("p2.txt");
	while (!p2.eof()){
		if (cnt==24) {
			cout << "Continue?[Y/N]" << endl;
			cin>>a;
			if (a == 'y' || a == 'Y') {
				cnt = 0;
			}
			else{
				break;
			}
		}
		getline(p2, t);
		cout << t << endl;
		cnt++;
	}
}

//==============================================================================

void p1Ch12(){
	ifstream p1;
	int counter = 0, lim = 10;
	string t;
	char a;
	p1.open("p1.txt");
	while (!p1.eof()){
		if (counter != lim){
			getline(p1, t);
			cout<<t<<endl;
		}
		else{
			cout<<"Continue? [Y/N]"<<endl;
			cin>>a;
			if (a == 'y' || a == 'Y'){
				lim+=10;
			}
			else{
				break;
			}
		}
		counter++;
		if (p1.eof()){
			cout<<"End of file!"<<endl;
		}
	}
	p1.close();p1.clear();
	
}



//==============================================================================


void p3Ch10(){
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
    
	}
	


//==============================================================================
void p1Ch10(){
    //Declare Variables
    const int SIZE=200; //size is enough to Enter up to a line of characters
    char strng[SIZE]; //array of characters (c-string)
    
    //Input Values
    cout<<"Enter prefered  words, up to "<<SIZE-1<<" total characters : "<<endl; //input characters (reserve last one for null)
    cin.getline(strng, SIZE); //get the input of the characters
    
    
    cout<<"You entered "<<ctwd3(strng, SIZE)<<" words. "<<endl; //count the words 
    
    //Exit stage right! - This is the 'return 0' call
    
	
}
//==============================================================================
//==============================================================================
void p9Ch12(){
    ifstream toEnc;
    ofstream crypt;
    toEnc.open("toEncrypt.txt");
    crypt.open("encrypted.txt"); 
    char ch='A';
    int i = 0;
    string temp;
    while(!toEnc.eof()){
        getline(toEnc, temp);
        do{
            temp[i] = temp[i]^ch;
            i++;ch++;
            if(ch == 'Z') ch = 'A';
        }while(i < temp.length());
        crypt<<temp<<'\n';
        i = 0;
        ch = 'A';
    }
	cout<<endl<<endl<<"Check out the files 'toEncrypt.txt' and 'encrypted.txt' for the results!"<<endl;
	
    toEnc.close();crypt.close();
}
//==============================================================================
//==============================================================================
void p4Ch10(){          
     //Declare Variables
    const int SIZE=200; //size is enough to Enter up to a line of characters
    char strng[SIZE]; //array of characters (c-string)
    
    //Input Values
    cout<<"Enter some words, up to "<<SIZE-1<<" total characters : "<<endl; //input characters (reserve last one for null)
    cin.getline(strng, SIZE); //get the input of the characters
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"You entered "<<ctwd4(strng, SIZE)<<" words. "<<endl; //count the words 
    cout<<setprecision(2)<<fixed; //format output 2 decimal points fixed
    cout<<"They contained "<<avgL5(strng, SIZE)<<" letters each on average."<<endl; //output avg letters per word
    
    //Exit stage right! - This is the 'return 0' call
   
    
}
//==============================================================================
//==============================================================================
void p2Ch10(){
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
    
}
//==============================================================================
//==============================================================================
void p3Ch12(){
    ifstream joke, punch;
    int lim = 50, i=0;
    char a[lim], ch;                //Store the files in arrays And temporarily, in characters
    joke.open("joke.txt");
    punch.open("punchline.txt");
    do{
        joke.get(a[i]);
        cout<<a[i];
        i++;
    }while(!joke.eof());
    cout<<endl;
    punch.seekg(0,ios::end); //Set the read bit at the end of the file.
    while (ch!= '\n'){
        punch.seekg(-2, ios::cur);  //for some reason, swapping the position 
        punch.get(ch);              // of these 2 lines messes everything up
    }                               //Also, seekg HAS to be -2, probably because
    //punch.seekg(-1, ios::cur);    //punch.get(ch) moves the readbit over by 1
    while (!punch.eof()){
        cout<<ch;
        punch.get(ch);
    }
    punch.close();
    joke.close();
	cout<<endl;
}
void p5Ch10(){
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
    
}
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
float avgL5(char *str, int size){
    int temp=1; //temp since i is local in the for loop
    int totChar=0;
    for (int i=0; str[i]!='\0'&&i<size;i++){ //go through loop until either max array size or hit null char
        if (str[i]==' '&&str[i+1]!=' ') temp++; //count whitespace after each word but not multiples
        if (str[i]!=' ') totChar++; //add to character count if not a whitespace
    } 
    return (static_cast<float>(totChar)/static_cast<float>(temp));
} 

int ctwd4(char *str, int size){
    int temp=1; //temp since i is local in the for loop
    for (int i=0; str[i]!='\0'&&i<size;i++){ //go through loop until either max array size or hit null char
        if (str[i]==' '&&str[i+1]!=' ') temp++; //whitespace after each word
    }
    return temp;
}
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
int cntS1(char str[], int size){
    int temp=0; //temp since i is local in the for loop
    for (int i=0; str[i]!='\0'&&i<size;i++){ //go through loop until either max array size or hit null char
        temp=i+1; //counter set to i 
    }
    if (str[0]=='\0') temp=0;
    return temp; //return the value of the for loop
}
int ctwd3(char *str, int size){
    int temp=1; //temp since i is local in the for loop
    for (int i=0; str[i]!='\0'&&i<size;i++){ //go through loop until either max array size or hit null char
        if (str[i]==' '&&str[i+1]!=' ') temp++; //sequential whitespaces not counted as more words
    }
    return temp;
}
