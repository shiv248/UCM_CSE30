#include <math.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
	ifstream file;
	file.open ("text.txt");	
	if (!file.is_open()) return 0;
	int count;
	string str;
	while (file >> str){

		cout << str << endl;
		//count++;
	}
}
