#include <iostream>
#include "SomethingCool.h"
#include "RandomSupport.h"
#include "TimeSupport.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    long N = 10000000;
    
    // Set up the random device
    randomizer device = new_randomizer();
    uniform_distribution dist = new_distribution(0, 100*N);
    
    // A different kind of container to store the numbers
    // It's not an array
    MyStruct c = MyStruct(N);
    
    // Start the timer
    timestamp insertBegin = current_time();
    
    // Insert N random numbers in the container
    for (long i = 0; i < N; i++){
        c.insert(sample(dist, device));
    }
    
    // Stop the timer
    timestamp insertEnd = current_time();
    
    // Calculate the duration of the insertion procedure
    long insertDuration = time_diff(insertBegin, insertEnd);
    
    // Print out how long it took
    cout << "Generated " << N << " random numbers in "<< insertDuration << " ms" << endl << endl;
    
    
    long X = 0;
    while (X != -1){
    
        cout << "Enter number of searches to perform (-1 to stop): ";
        cin >> X;
        
        if (X == -1){
            exit(0);
        }
        
        timestamp searchBegin = current_time();
        
        for (long i = 0; i < X; i++){
            if (c.search(i)){
                cout << i << endl;
            }
        }
        
        timestamp searchEnd = current_time();
        
        long searchDuration = time_diff(searchBegin, searchEnd);
        
        cout << "Took " << searchDuration << " ms." << endl;
        
        cout << endl;
    }
    
    return 0;
}
