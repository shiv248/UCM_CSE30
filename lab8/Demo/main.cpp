#include <iostream>

using namespace std;


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



struct LinkedList {
    Link* head;
    Link* last;
    
    LinkedList(){
        head = NULL;
        last = NULL;
    }
    
    LinkedList(long value){
        head = new Link(value);
        last = head;
    }
    
    void print(){
        while (head != NULL) {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
    
    
    
    void stackPush(long value){
        if (head != NULL){
            Link* oldHead = head;
            head = new Link(value);
            head->next = oldHead;
        }
        else{
            head = new Link(value);
            last = head;
        }
    }
    
    void queuePush(long value){
        
        if(head == NULL){
            head = new Link(value);
            last = head;
            return;
        }
        
        // Create new node with value
        Link* newNode = new Link(value);
        
        
        // Set next of last element to the new node
        last->next = newNode;
        last = last->next;
        
    }
};



int main(int argc, const char * argv[]) {
    
//    Link* myList = new Link(7);
//
//    insert(myList, 9);
//
//    print(myList);
    
    LinkedList* myList = new LinkedList();
    
    cout << "Starting..." << endl;
    
    for (long i = 0; i < 10; i++) {
        if (i % 2 == 0){
            myList->stackPush(i);
        }
        else {
            myList->queuePush(i);
        }
        
    }
    
    cout << "Done..." << endl;
    myList->print();
    
    return 0;
}
