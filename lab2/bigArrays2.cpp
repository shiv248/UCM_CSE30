#include <iostream>
#include "FillUp.h"
#include <array>
using namespace std;

int main() {

	// Read in the size from the user
	int size;
	cin >> size;
	//size = size/2;
	//cout << size << endl;
	// Create an array of appropriate size
	int arr[size];
	cout << sizeof(arr)/sizeof(arr[0]) << endl;
	// Call the fillUp function
	fillUp(arr, size);
	//for (int i = 0; i <= size - 1; i++){
	//cout << arr[i] << endl;
	//}
	// Call the printPos function on last position
	printPos(arr, size-1);


	return 0;
}
