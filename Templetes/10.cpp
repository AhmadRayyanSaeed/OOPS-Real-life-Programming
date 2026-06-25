//Problem 2: Banking System
//A bank needs to determine the larger of two values:
//? Account balances (double)
//? Loan amounts (float)
//? Number of transactions (int)
//Instead of writing multiple functions, use a function template.
//Task
//Create a template function findMaximum() that returns the larger of two values.
//Example
//findMaximum(5000, 8000);
//findMaximum(1234.5, 987.2);

#include<iostream>
using namespace std;

template<class T>
T findMaximum(T n , T m){
if(n>m){
	cout<<" first values is greater "<<endl;
}
else{
	cout<<"Second value is greter "<<endl;
}

}

int main(){
findMaximum(5000,8000);
findMaximum(1234.5,987.2);
	return 0;
}
