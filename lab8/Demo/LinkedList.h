#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>
#include "Link.h"

struct LinkedList {
    Link* head;
    Link* tail;
    
    LinkedList() {
        head = NULL;
        tail = NULL;
    }
    
    void add(long value){
        if (head == NULL){
            head = new Link(value);
            tail = head;
        }
        else {
            tail->next = new Link(value);
            tail = tail->next;
        }
    }
    
    void print (){
        Link* temp = head;
        
        while (temp != NULL){
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
        
    }
    
};





#endif
