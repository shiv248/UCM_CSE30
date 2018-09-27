#include <iostream>

using namespace std;
int main(){

	int n = 5;
	int j = 78;

	int* p = &n;
	cout << "Address of n:  " << (long) &n << endl;
	cout << "Address of p:  " << (long) p << endl;
	//cout << "Value at p:	" << (long) *p << endl;
	cout << "Address of p:	" << (long) &p << endl;

	p = p + 1;	
	cout << "Address of n:  " << (long) p << endl;
	cout << "Value at p:	" << (long) *p << endl;


	return 0;

}
