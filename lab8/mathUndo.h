#ifndef mathUndo.h
#define mathUndo.h 

struct Link {
    long data;
    Link* next;
    
    Link(){
        data = 0;
        next = NULL;
    }
    
    Link (long d){
        data = d;
        next = NULL;
    }
};

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
