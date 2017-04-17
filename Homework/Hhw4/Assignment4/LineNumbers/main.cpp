/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on April 2, 2017, 5:22 PM
 */


#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(int argc, char** argv) {
    
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
