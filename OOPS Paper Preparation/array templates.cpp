#include<iostream>
using namespace std; 

template<class T>
int array_find(T* arrt, T value ,int size){
	for(int i=0;i<size ; i++){
		if(arrt[i] == value)
		return i;
	}
	return -1;
}

int main(){
	int arr1[6] = {1,2,4,5, 6,8};
	int ar = 8;
	
	float arr2[6] = {2.3,3.8,4.8,5.4 ,6.9,9.4};
	float ar3 = 4.8;
	
	double arr3[6] = {2.333,3.888,4.8441,5.441, 6.944,9.421};
	double ar4 = 3.888;
	
	cout<<array_find(arr1, ar ,6)<<endl;
	cout<<array_find(arr2, ar3 ,6)<<endl;
	cout<<array_find(arr3, ar4 ,6)<<endl;
	
	return 0;
}
