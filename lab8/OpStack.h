#ifndef OpStack_h
#define OpStack_h
using namespace std;
// Define the Link struct below...

struct Link {
    long data;
    char op;
    Link* next;
    
    Link(){
        op = (char)0;
        data = 0;
        next = NULL;
    }
    
    Link (long d, char b){
        op = b;
        data = d;
        next = NULL;
    }
};

// Now define the Stack struct. It should be a stack of Links...

struct Stack {
    Link* front;
    
    Stack(){
        front = NULL;
    }
    
    void push(long inVal1, char inVal2){
        Link* old = front;
        front = new Link(inVal1,inVal2);
        front->next = old;
    }
    
    bool isEmpty(){
        return (front == NULL);
    }
    
    Link* pop(){
        long val = front->data;
        char val2 = front->op;
        
        Link* oldFront = front;
        front = front->next;
        
        return oldFront;
    }
};
#endif

