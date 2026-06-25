//Problem 3: E-Commerce Discount Calculator
//An online shopping platform offers discounts on:
//? Electronics prices (double)
//? Grocery bills (float)
//? Gift card values (int)
//Task
//Create a template function calculateDiscount() that accepts an amount and discount
//percentage and returns the final price.
//Example
//calculateDiscount(5000.0);
//calculateDiscount(250);


#include<iostream>
using namespace std;

// Discount Amount = original price * Discount% / 100;
//  Final price = original price - Discount Amount;


template<class T>
T calculateDiscount(T amount , T persent){
   T Discount = (amount * persent ) / 100;
	T  final = amount - Discount ;
	
	return final;

}

int main(){
cout<<calculateDiscount(5000,10)<<endl;
cout<<calculateDiscount(250,2)<<endl;
	return 0;
}
