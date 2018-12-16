
#ifndef Queue_h
#define Queue_h

#include <iostream>

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
    
    bool find (long value){
        // Provide your code here
        Link* temp = front;
        
        while (temp != NULL){
            if (temp->data == value){
                return true;
            }
            temp = temp->next;
        }
        return false;
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
    
    void print() {
        // Provide your code here
        Link* temp = front;
        while (temp != NULL){
            std::cout << temp->data << " ";
            temp = temp->next;
        }
    }
    
    ~Queue(){
        // Provide your code here
        while(!isEmpty()){
            pop();
        }
    }
};

#endif
