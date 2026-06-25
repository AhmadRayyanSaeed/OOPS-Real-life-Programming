//Problem 6: GPS Navigation System
//A navigation system calculates distances between locations. Distances may be represented as:
//? Integer kilometers
//? Floating-point kilometers
//? Double precision coordinates
//Task
//Create a template function distanceDifference() that finds the absolute difference
//between two distances.

#include<iostream>
#include <cmath>
using namespace std;

template<class t>
t distanceDifference(t d1, t d2){
 t absote = abs(d1 - d2 );
 return absote;
}

int main(){
	cout<<" integer : "<<distanceDifference(10,30)<<endl;
	cout<<" Float : "<<distanceDifference(10.5,25.6)<<endl;
	cout<<" Double : "<<distanceDifference(85.75 ,3.14159265359)<<endl;
	return 0;
}
