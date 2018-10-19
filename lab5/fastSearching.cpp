#include <iostream>
#include "BinSearch.h"

using namespace std;

int main() {
    long size;
    cin >> size;
    
    long* numbers = new long[size];

    // This list is sorted
    for (long i = 0; i < size; i++) {
        numbers[i] = i;
    }
    
    cout << binSearch(numbers, size, size-1) << endl;
    cout << binSearch(numbers, size, size+5) << endl;
    cout << binSearch(numbers, size, -17) << endl;
    
    return 0;
}
