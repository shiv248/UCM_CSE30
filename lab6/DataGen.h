#ifndef DataGen_h
#define DataGen_h

#include "RandomSupport.h"

void quickSort(long arr[], int left, int right) {
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



void efficientRandomSortedList(long temp[], long s){
    // Get a new random device
    randomizer device = new_randomizer();
    // Get a uniform distribution from 1 to 1000
    //uniform_distribution range = new_distribution(0, 1);

    for (long i = 0; i < s; i++) {
        uniform_distribution range = new_distribution(i*10, (i+1)*10);
        temp[i] = sample(range, device);
    }

    // Now sort the array using insertion_sort
    //quickSort(temp, 0, s); 
}


#endif /* DataGen_h */
