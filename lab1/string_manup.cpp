#include <math.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	vector <string> all_words;
	vector <string> string_store;
	bool quit;
	while(quit != true){
		string temp_str;
		cin >> temp_str;
		if (temp_str.size() == 1){
			for( int i = 0; i < string_store.size(); i++){
				string temp_string = string_store[i];	
				temp_string = temp_string[0];
				if(temp_string == temp_str){
					all_words.push_back(string_store[i]);
				}
			}			
		}
		else if(temp_str == "quit"){
			quit = true;
		}
		else{ 
			string_store.push_back(temp_str);
		}
	}
	for (int k = 0; k < all_words.size(); k++){
	cout << all_words[k] << endl;

}
}

