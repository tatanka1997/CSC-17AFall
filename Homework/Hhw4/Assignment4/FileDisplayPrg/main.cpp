/* 
 * File:   main.cpp
 * Author: erikn
 *
 * Created on April 2, 2017, 4:30 PM
 */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(int argc, char** argv) {
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