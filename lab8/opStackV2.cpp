#include <iostream>
#include "OpStack.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Stack* myStack = new Stack();
    char input;
    long temp;
    long Total = 0;
    cin >> input;
    while(input != 'q'){
        if(input == 'a'){
            cin >> temp;
            myStack->push(temp,input);
        }else if(input == 's'){
            cin >> temp;
            myStack->push(temp,input);
        }else if(input == 'z'){
        	
               if(!myStack->isEmpty()){
               cout << "Nothing to undo..." << endl;
               }else{
               myStack->pop();
               }

        	/*
            Stack* xStack = myStack;
            while(!xStack->isEmpty()){
                Link* tempElement = xStack->pop();
                cout << tempElement->op << "," << tempElement->data << endl;
                delete tempElement;
            }
            */
            
        }
        Stack* tempStack = myStack;
        while(!tempStack->isEmpty()){
            Link* tempElement = tempStack->pop();
            if(tempElement->op == 'a'){
                Total = Total + tempElement->data;
            }else if(tempElement->op == 's'){
                Total = Total - tempElement->data;
            }
            delete tempElement;
        }
        // delete tempStack;
        cout << "Total: " << Total << endl;
        cin >> input;
    }


    return 0;
}
