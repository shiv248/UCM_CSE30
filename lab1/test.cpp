#include<iostream>
using namespace std;


//factorial function
unsigned long long factorial(int);

int main()
{

	int x,f;
	cout<<"Enter number : ";
	cin>>x;
	cout<<"The factorial is :"<<factorial(x) << endl;
	
	return 0;
}

unsigned long long factorial(int a)
{
	unsigned long long fact=1;
//multiply all numbers below the input number
	while(a>=1)
	{
		fact = fact * a;
		a--;
	}

	return fact;
}

