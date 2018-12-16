#ifndef Queue_h
#define Queue_h

#include <string>
using namespace std;
struct Link {
    string data;
    Link* next;
    
    Link(){
        data = "";
        next = NULL;
    }
    
    Link (string d){
        data = d;
        next = NULL;
    }
};

struct Queue {
    Link* front;
    Link* back;
    
    Queue (){
        front = NULL;
        back = NULL;
    }
    
    string peek () {
        return front->data;
    }
    
    void push(string value){
        if (isEmpty()){
            front = new Link(value);
            back = front;
        }
        else {
            back->next = new Link(value);
            back = back->next;
        }
    }
    
    bool isEmpty(){
        return (front == NULL);
    }
    
    string pop(){
        string val = front->data;
        
        Link* oldFront = front;
        front = front->next;
        
        delete oldFront;
        
        return val;
    }
};

#endif


