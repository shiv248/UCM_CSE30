// CPP program to illustrate 
// Implementation of pop() function 
#include <iostream> 
#include "OpStack.h" 
using namespace std; 
  
int main() 
{ 
    Stack* mystack = new Stack; 
    mystack->push(1,'a'); 
    mystack->push(2,'b'); 
    mystack->push(3,'c'); 
    mystack->push(4,'d'); 
    // Stack becomes 1, 2, 3, 4 
  
    mystack->pop(); 
    mystack->pop(); 
    // Stack becomes 1, 2 
  
    while (!mystack->isEmpty()) {
        Link* tempStack = mystack->pop();
        cout << ' ' << tempStack << endl; 
    } 
} 
