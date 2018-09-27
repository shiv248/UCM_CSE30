#include <iostream>
using namespace std;
int main(){
	int horse;
	int pig;
	int rabbit;
	for (int h = 0; h < 100; h++){
		for (int p = 0; p < 100; p++){
			for(int r = 0; r < 100; r++){
				if((h+r+p) == 100){
					if(((10 * h) + (3 * p) + (0.5 * r)) == 100){
						horse = h;
						pig = p;
						rabbit = r;
					goto break_me_here;
					}
					else{
						cout << "try " << h << " horses " << p << " pigs " << r << " rabbits, ah nope " << endl;
					}
					
				}
			}
		}
	}
	break_me_here:
		cout << "try " << horse << " horses " << pig << " pigs " << rabbit << " rabbits " << endl;
}
