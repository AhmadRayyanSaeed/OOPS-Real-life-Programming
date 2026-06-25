//Problem 8: Online Examination System
//The examination portal stores answers of different types:
//? Integer answers
//? Character answers
//
//? Floating-point answers
//Task
//Create a template function swapAnswers() to exchange two answers regardless of their type.
//Example
//swapAnswers(a,b);

#include<iostream>
using namespace std;

template<class TT>
void swapAnswers(TT &m ,TT &n){
	TT temp;
	temp = m;
	m = n;
	 n =temp;
	
}

int main(){
	int a = 10 , b = 20;
	float c = 50.2, d = 32.5;
	string e = "ali " , f = "hamza" ;
	
	swapAnswers(a,b);
	cout<<a<<" "<<b<<endl;
	
	swapAnswers(c, d);
	cout<<c<<" "<<d<<endl;
	
	
	swapAnswers(e,f);
	cout<<e<<" "<<f<<endl;
	
	return 0;
}













