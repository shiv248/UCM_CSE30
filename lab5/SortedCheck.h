#ifndef SortedCheck_h
#define SortedCheck_h

bool sortedCheck(long* list, long size){
	for(int i = 0; i < (size)/2; i++){
		if(list[i] < list[i + 1] && list[size-2-i] < list[size-1-i]){
			continue;
		}
		else{
			return false;
		}
	}
	return true;
}


#endif 
