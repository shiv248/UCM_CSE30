#include <math.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int exit;
	int input;
	while (true){
		cin >> input;
		if( input == -1){
			break;		
		}
		if (input % 2 == 0){
			cout << "EVEN" << endl;
		}
		else{
			cout << "ODD" << endl;
		}

	}
}
