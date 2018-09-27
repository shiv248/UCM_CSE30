#include <cstdio>
#include <iostream>
using namespace std;
// factorial function
long long factorial(int);

int main(){
//input
	int number;
	cin >> number;
//go through all numbers from 2 to the input number
	for(int j = 2; j <= number -1; j++){

		long long result;
//Wilson's Theorem ~ (X -1)! +1 is divisible by X, then X is a prime number
		result = ((factorial(j -1)) + 1) % j;
//if the number was truly divisible
		if( result == 0){
			cout << j << endl; 
		}
	}
	return 0;
}
//Factorial function
long long factorial(int input){
	long long temp_int = 1;
//multiply all the numbers from 1 to the input number
	for (int i = input; i >= 1; i--){
		temp_int *= i;
	}

	return temp_int;

}
