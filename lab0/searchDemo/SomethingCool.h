#ifndef MS_h
#define MS_h


struct Node;

struct MyStruct {
    
    Node** array;
    long size;
    
    MyStruct(long size);
    
    long coolOperation(long value);
    
    void insert(long value);
    
    bool search(long value);
    
    void print();
    
    ~MyStruct();
};

#endif 

