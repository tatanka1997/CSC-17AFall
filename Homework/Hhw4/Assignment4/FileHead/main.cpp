/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on April 3, 2017, 4:24 PM
 */
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(int argc, char** argv) {
    
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