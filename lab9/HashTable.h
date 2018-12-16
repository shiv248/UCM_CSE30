#ifndef HashTable_h
#define HashTable_h
#include "Queue.h"
#include <iostream>
#include <vector>
using namespace std;

struct HashTable {
    long size;
    vector<Queue*> hashtable;

    HashTable(){
        size = 10;
        // Initialize the vector with k empty Queues
        for (long i = 0; i < 10; i++) {
            hashtable.push_back(new Queue());
        }
    }


    HashTable(long input){
        size = input;
        // Initialize the vector with k empty Queues
        for (long i = 0; i < input; i++) {
            hashtable.push_back(new Queue());
        }
    }


    int f (long x){
        return x % size;
    }


    void insert(long input){
        int index = f(input); 
        hashtable[index]->push(input);
    }


    bool find(long input){
        int index = f(input); 
       if(hashtable[index]->find(input) == 1){
           return true;
       }else{
           return false;
       }
        
    }


    void print(){
        // Print contents of hash table
        for (long i = 0; i < size; i++) {
            Queue* current = hashtable[i];

            cout << i << ": ";

            current->print();
            cout << endl;
        }

    }



    ~HashTable(){
        for (long i = 0; i < size; i++) {
            delete hashtable[i];
        }
    }
};
#endif

