#include<iostream>
using namespace std;

template <class T >
int find( T* arr, T value,  int size){
	for(int j=0; j <= size; j++){
		if(arr[j]==value)
		return j;
	}
	return -1;
}


	int val1[]={1,2,3,4,5,6};
	int v2=4;
	
	float val2[]={2.2,3.3,4.4,5.5,8.8,6.5};
	float v3=4.4;
	
	long lonArr[] =   {1L, 3L, 5L, 9L, 11L, 13L};
    long lo = 11L;
    
    double dubArr[] = {1.0, 3.0, 5.0, 9.0, 11.0, 13.0};
    double db = 4.0; 
	
	int main(){
	 cout << "Index of 4 = "
         << find(val1, v2, 6) << endl;

    cout << "Index of 4.4 = "
         << find(val2, v3,6) << endl;

    cout << "Index of 11 = "
         << find(lonArr, lo,6) << endl;

    cout << "Index of 4.0 = "
         << find(dubArr, db,6) << endl;
	
	return 0;
}
