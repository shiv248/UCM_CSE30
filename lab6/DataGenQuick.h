#ifndef DataGen_h
#define DataGen_h

#include "RandomSupport.h"



bool isSorted(long a[], int start, int end) {
    for (int i = start+1; i < end; i++) {
        if (a[i] < a[i-1]) {
            return false;
        }
    }
    return true;
}



void quickSort(long arr[], int left, int right) {
    if(!(isSorted(arr, left, right+1))){
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
    /* partition */
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };

    /* recursion */
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
    }
    }

void efficientRandomSortedList(long temp[], long s){
    // Get a new random device
    randomizer device = new_randomizer();
    // Get a uniform distribution from 1 to 1000
   //uniform_distribution range = new_distribution(1, 1000);


    for (long i = 0; i < s; i++) {
        uniform_distribution range = new_distribution(i, i+1);
        temp[i] = sample(range,device);
        /*
        uniform_distribution range = new_distribution(i, i+1);
        uniform_distribution range2 = new_distribution(s-1+i, s-i);
        temp[i] = sample(range, device);
        temp[s-1-i] = sample(range2, device);
    */
        }

    // Now sort the array using insertion_sort
    quickSort(temp, 0, s); 
}

#endif /* DataGen_h */
