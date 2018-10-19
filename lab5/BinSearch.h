#ifndef BinSearch_h
#define BinSearch_h
using namespace std;

long binSearch(long* list, long n, long val){
	int guess;
	int min = 0;
	int max = n - 1;
	while( min <= max){
		guess = (int)(((max+min)/2)+0.5);
		if(list[guess] < val) {
			min = guess + 1;
		}else if(list[guess] > val){
			max = guess - 1;
		}
		else{
			return guess;
		}
	}
	return -1;
}
#endif
