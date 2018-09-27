#ifndef FindMin_h
#define FindMin_h
using namespace std;

// Declare and define the findMin function here
int findMin(int numbers[], int start, int end){
int tempInt = numbers[start];
int tempIndex = start;
//cout << tempInt << "is start index"  << endl;
for(int i = start + 1;i < end; i++){
//	cout << numbers[i] << "index" << endl;
	if (numbers[i] < tempInt){
//		cout<< numbers[i] << "is greater than" << tempInt << endl;
		tempInt = numbers[i];
		tempIndex = i;
	}
}
return tempIndex;
}

// Do not write any code below this line
#endif
