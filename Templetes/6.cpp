#include<iostream>
using namespace std;

template<class T>
int values(T *point,T initt, int size){
	for(int j=0; j<size ; j++){
		if(point[j] == initt)
		return j;
	}
	return -1;	
}
int main(){
	int a[6]={5,6,8,9,3,4};
	int b=3;
	float c[6]={5.6,6.8,8.3,9.4,3.6,4.7};
	float d=4.7;

	cout<<values(a,b,6)<<endl;
	cout<<values(c,d,6)<<endl;
	
	
	return 0;
}
