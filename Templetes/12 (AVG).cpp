//Problem 5: University Result Management
//A university stores marks for:
//? Quiz (int)
//? Lab (float)
//? Project (double)
//Task
//Create a template function calculateAverage() that computes the average of three values
//of any numeric type.
//Example
//calculateAverage(80,85,90);
//calculateAverage(85.5,90.0,88.5);


#include<iostream>
using namespace std;

template<class T>
T calculateAverage(T a, T b, T c){
	T avg = (a + b + c) / 3;
	return avg;
}


int main(){
	cout<<" Int value avg is : "<<calculateAverage(80,85,90)<<endl;
cout<<" Float value avg is : "<<calculateAverage(85.5,90.0,88.5)<<endl;

	return 0;
}
