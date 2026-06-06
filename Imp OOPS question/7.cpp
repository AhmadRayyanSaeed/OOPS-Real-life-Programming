//Create a class Area with two data members length and width. Perform the following
//tasks:
//? Implement the following constructors:
//o One default constructor
//o One parameterized constructor that takes only length
//o One parameterized constructor that takes both length and width
//? Create a member function to calculate the area of a rectangle.
//? In the main() function, create objects using all three constructors and display the
//calculated area.

#include<iostream>
using namespace std;

class Area{
	private:
		float length;
		float width;
	public:
	Area(){}
	Area(int le){
		length=le;
		width = 0;
	}
	Area(int le, int f){
		length = le;
		width = f;
	}
	float cul(){
		return length * width;
	}
	void dis(){
		cout<<"length "<<length<<endl;
		cout<<"width  "<<width<<endl;
		cout<<"Area   "<<cul()<<endl;
	}	
};

int main(){
	Area a1(20);
	Area a3;
	Area a2(10,30);
	a1.dis();
		a2.dis();
		a3.dis();
}
