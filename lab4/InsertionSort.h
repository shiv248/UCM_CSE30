#ifndef InsertionSort_h
#define InsertionSort_h

#include "Swap.h"

// Declare and define the insertion sort function below
// You *MUST* use the swap operation defined in Swap.h to swap elements
void insertion_sort (int numbers[], int length){
	int n = length;
	for(int i = 1; i < n; i++){
		int j = i;
		while(j > 0 && numbers[j-1] > numbers[j]){
			swap(numbers, j-1, j);
			j = j-1;
		}
	}



}

/*
   void insertion_sort (int numbers[], int length){
   for(int i = 1; i < length; i++){
   for(int j = i; i < length-1; j++){
   if(numbers[j] < numbers[j-1]){
   swap(numbers, j, j-1);
   }
   else{
   break;
   }

   }

   }
   }
   */
// Do not write any code below this line
#endif
