/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on April 1, 2017, 4:35 PM
 */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(int argc, char** argv) {
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
        punch.seekg(-2, ios::cur);  
        punch.get(ch);              
    }                               
    while (!punch.eof()){
        cout<<ch;
        punch.get(ch);
    }
    punch.close();
    joke.close();
	cout<<endl;
}
