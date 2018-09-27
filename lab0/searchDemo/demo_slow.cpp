#include <iostream>
#include "RandomSupport.h"
#include "TimeSupport.h"

using namespace std;

bool search(long* arr, long n, long val){
    for (long i = 0; i < n; i++){
        if (arr[i] == val){
            return true;
        }
    }
    
    return false;
}

int main(int argc, const char * argv[]) {
    
    long N = 10000000;
    
    // Set up the random device
    randomizer device = new_randomizer();
    uniform_distribution dist = new_distribution(0, 100*N);
    
    // The array that will hold all the random numbers
    long* array = new long[N];
    
    // Get the current time
    timestamp insertBegin = current_time();
    
    for (long i = 0; i < N; i++){
        // Get a random number and store it in the array
        array[i] = sample(dist, device);
    }
    
    // Get the current time
    timestamp insertEnd = current_time();
    
    // How long did it take to execute the above for loop
    long insertDuration = time_diff(insertBegin, insertEnd);
    
    // Print out the duration of the insertion procedure
    cout << "Generated " << N << " random numbers" << " in " << insertDuration << " ms" << endl << endl;
    
    
    // Now we would like to search for all the numbers less
    // than some ceiling
    
    // Ask the user to enter the ceiling
    long X = 0;
    while (X != -1){
    
        cout << "Enter number of searches to perform (-1 to stop): ";
        cin >> X;
        
        // If -1 was entered, then just exit
        if (X == -1){
            exit(0);
        }
        
        // Start the timer
        timestamp searchBegin = current_time();
        
        // Perform the search for every number from 0 to X
        for (long i = 0; i < X; i++){
            // If the number i appears in the array, then print it
            if (search(array, N, i)){
                cout << i << endl;
            }
        }
        
        // Stop the timer
        timestamp searchEnd = current_time();
        
        // Print out the duration of the serarch
        long searchDuration = time_diff(searchBegin, searchEnd);
        cout << "Took " << searchDuration << " ms." << endl << endl;
    }
    
    // Clean up the memory occupied by the array
    delete[] array;
    
    return 0;
}
