#ifndef Stack_h
#define Stack_h

#include "Link.h"

struct Stack {
    Link* front;
    
    Stack(){
        front = NULL;
    }
    
    void push(long value){
        Link* old = front;
        front = new Link(value);
        front->next = old;
    }
    
    bool isEmpty(){
        return (front == NULL);
    }
    
    long pop(){
        long val = front->data;
        
        Link* oldFront = front;
        front = front->next;
        
        delete oldFront;
        
        return val;
    }
};

#endif
