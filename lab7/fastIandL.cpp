#include <iostream>
#include"RandomSupport.h"
#include "BST.h"

using namespace std;

int main(){
    long n;
    cin >> n;
    Node* list = NULL;
    randomizer random = new_randomizer();
    uniform_distribution range = new_distribution(0,90000000);
    for(long i = 0; i < n; i++){
        list = insert(list,sample(range,random));
    }
    list = insertSpecialNumber(list);
    findSpecialNumber(list);
}
