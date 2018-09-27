#include <math.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	vector <string> all_text;
	bool stop;
	string combined_str;
	while (stop != true){
		string temp_str;
		int temp_amt;
		cin >> temp_str >> temp_amt;
		if (temp_amt == -1){

			all_text.push_back(combined_str);
			combined_str = "";
			//all_text.push_back("/n");
		}
		else if(temp_amt == -2){
			all_text.push_back(combined_str);

			stop = true;
		}
		else{
			for(int i = 0; i < temp_amt; i++){	
				combined_str += temp_str;
			}
		} 
	}
	for (int i = 0; i < all_text.size(); i++){ 
		cout << all_text[i] << endl;
	}

}
