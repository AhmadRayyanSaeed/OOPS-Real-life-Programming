//Write a C++ program using a **function template 
//find()`** that searches a given value in an array and
//returns its index position. If the value is not found,
//the function should return **-1**. Demonstrate the program
//using different data types such as **char, int, long, and double**.

#include<iostream>
using namespace std;

template <class T>
int find(T* array, T value,int size){
	for(int i=0; i<size; i++){
		if(array[i]== value)
		return i;
	}
	return -1;
}

int main(){
	int arr1[]={4,5,2,55,20,44};
	int ar1=44;
	
	float arr2[] = {5.5, 1.2, 6.2, 3.5,8.2,6.5};
	float ar2=6.2;
	
	double dubArr[] = {1.0, 3.0, 5.0, 9.0, 11.0, 13.0};
    double db = 13.0;
    
    cout<<find(arr1,ar1,6)<<endl;
    cout<<find(arr2,ar2,6)<<endl;
    cout<<find(dubArr,db,6)<<endl;
    
	return 0;
}
