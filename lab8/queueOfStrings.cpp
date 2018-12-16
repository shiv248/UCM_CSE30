#include <iostream>
#include <string>
#include "StringQueue.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Queue queue;
    char input;
    cin >> input;
    while(input != 'q'){
        if(input == 'a'){
            string temp;
            cin >> temp;
            queue.push(temp);
            cout << temp + " arrived" << endl;
        }else if(input == 'n'){
        	if(!queue.isEmpty()){
        		cout << "Next in line: " + queue.peek() << endl;
        	}else{
        		cout << "The waiting list is empty " << endl;
        	}
            
        }else if(input == 's'){
            if(!queue.isEmpty()){
            	cout << "Now serving: " + queue.pop() << endl;	
            }else{
        		cout << "No customers waiting" << endl;
        	}
            
        }
        cin >> input;
    }
    bool closeUpPrint = false;
    while (!queue.isEmpty()) {
    	if(closeUpPrint == false){
    		cout << "Come back tomorrow:" << endl;
    		closeUpPrint = true;
    	}
        cout << queue.pop() << endl;
    }
    cout << "Closing up now." << endl;
    return 0;
}

