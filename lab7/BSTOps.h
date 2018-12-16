#ifndef BSTOps_h
#define BSTOps_h

#include "BSTComplete.h"

int occurrences(Node* root, int value){
    int counter = 0;
    if(value >= root -> data){
        while(root != NULL){
            if(root -> data == value){
                counter++;
            }
            root = root -> right;
        }
    }else{
        while(root != NULL){
            if(root -> data == value){
                counter++;
            }
            root = root->left;
        }
    }
    return counter;


}

#endif
