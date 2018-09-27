#include <math.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
int  radius;
cin >> radius;
if (cin){

//cout << "our Pi variable is: " << M_PI << endl;
//cout << "input variable is: " << radius << endl;
radius *= radius;
//cout << "radius squared is  " << radius << endl;;

cout << M_PI * radius << endl;
}
else{
cout << "this is not a number" << endl;
}

}
