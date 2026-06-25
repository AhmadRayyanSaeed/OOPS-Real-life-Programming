#include<iostream>
using namespace std;

template <class T>
T add(T a, T b){
	cout<<"Total number "<<a+b<<endl;
}

int main(){
	add(2,6);
	add(3.2,5.5);
	add(22225, 6659789);
	return 0;

}
