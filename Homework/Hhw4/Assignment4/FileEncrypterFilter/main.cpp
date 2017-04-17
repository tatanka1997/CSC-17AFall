/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on April 5, 2017, 5:30 PM
 */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(int argc, char** argv) {
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