#ifndef Link_h
#define Link_h

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

#endif 
