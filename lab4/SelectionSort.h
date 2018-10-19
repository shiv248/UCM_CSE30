#ifndef SelectionSort_h
#define SelectionSort_h

#include "Swap.h"

// Declare and define the insertion sort function below
// You *MUST* use the swap operation defined in Swap.h to swap elements
void selection_sort (int numbers[], int length){
	int index = 0;
	for(int i = 0; i < length; i++){
		index = i;
		for(int j = i +1; j < length; j++){
			if(numbers[j] < numbers[index]){
				index = j;
			}
		}
		int temp = numbers[index];
		numbers[index] = numbers[i];
		numbers[i] = temp;
	}
}
#endif


