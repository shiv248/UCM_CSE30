#ifndef DataGen_h
#define DataGen_h
#include "RandomSupport.h"
void merge(long arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 

    /* create temp arrays */
    long* L = new long[n1];
    long* R = new long[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 

    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 

    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
    delete[] L;
    delete[] R;
} 

/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(long arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 

        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 

        merge(arr, l, m, r); 
    } 
} 

void efficientRandomSortedList(long inTemp[], long s){
    // Get a new random device
    randomizer device = new_randomizer();
    // Get a uniform distribution from 1 to 1000
    uniform_distribution range1 = new_distribution(1, 1000);
    uniform_distribution range2 = new_distribution(1000, 2000);
    long* temp = new long[s];
    long* temp1 = new long[s/2];
    long* temp2 = new long[s/2];
    for (long i = 0; i < s; i++) {
        // At every cell of the array, insert a randomly selected number
        // from distribution defined above
        temp1[i] = sample(range1, device);
        //temp1[i] = sample(range1, device);
        //temp2[i] = sample(range2, device);
    }

    // Now sort the array
    mergeSort(inTemp, 0, s-1);
    //mergeSort(temp1, 0, (s/2)-1);
    //mergeSort(temp2, 0, (s/2)-1);
    //insertion_sort(temp, s);
    //quickSort(temp,0,s-1);
    delete[] temp1;
    delete[] temp2;
    delete[] temp;
}


#endif /* DataGen_h */
