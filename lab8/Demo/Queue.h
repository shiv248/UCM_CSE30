
#ifndef Queue_h
#define Queue_h

#include "Link.h"

struct Queue {
    Link* front;
    Link* back;
    
    Queue (){
        front = NULL;
        back = NULL;
    }
    
    long peek () {
        return front->data;
    }
    
    void push(long value){
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
    
    long pop(){
        long val = front->data;
        
        Link* oldFront = front;
        front = front->next;
        
        delete oldFront;
        
        return val;
    }
};

#endif 
