#include <iostream>
#include "OpStack.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Stack* myStack = new Stack();
    char input = (char)0;
    long temp;
    long Total = 0;
    while(input != 'q'){
        cin >> input;
        if(input == 'a'){
            cin >> temp;
            myStack->push(temp,input);
            Total += temp;
            cout << "Total: " << Total << endl;
        }else if(input == 's'){
            cin >> temp;
            myStack->push(temp,input);
            Total -= temp;
            cout << "Total: " << Total << endl;
        }else if(input == 'z'){
            if(myStack->isEmpty()){
                cout << "Nothing to undo..." << endl;
            }else{
                Link* tempElement = myStack->pop();
                if(tempElement->op == 'a'){
                    Total -= tempElement->data;
                }else{
                    Total += tempElement->data;
                }
                delete tempElement;
                cout << "Total: " << Total << endl;
            }
            
        }

    }
    //cout << "Total: " << Total << endl;
    
return 0;
}
