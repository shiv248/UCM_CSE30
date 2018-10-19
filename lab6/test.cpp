#include <iostream>
#include "DataGen.h"
using namespace std;

int main(int argc, const char * argv[]) {
    const long size = 10000;
    //long arr[size] ={};
    long* a = new long[size];
    long* b = new long[size];
    long* result = new long[(size*2)+1];
    copy(a, a + size, result);
    copy(b, b + size, result + size);
    delete[] a;
    delete[] b;
    delete[] result;
    return 0;
}
