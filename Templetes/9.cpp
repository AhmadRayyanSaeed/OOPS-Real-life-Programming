//Problem 1: Smart Warehouse Inventory
//A warehouse stores products of different types such as:
//? Number of boxes (int)
//? Weight of materials (float)
//? Product codes (string)
//The manager wants a single function that can display any type of inventory item without writing
//separate functions for each data type.
//Task
//Create a function template displayItem() that can display inventory information regardless
//of its data type.
//Example
//displayItem(150);
//displayItem(25.75);
//displayItem(&quot;A1234&quot;);

#include<iostream>
using namespace std;

template<class T>
T displayItem(T a){
	cout<<a<<endl;
}

int main(){
	displayItem(150);
	displayItem(25.75);
	displayItem("A1234");
	return 0;
}
