//Create a base class Shape with a protected member variable color and a parameterized
//constructor to initialize it. Derive two classes, Circle and Rectangle, from Shape. Circle
//should have a private member variable radius, and Rectangle should have private member
//variables length and width. Implement constructors in the derived classes to initialize their
//respective members. Demonstrate creating objects of Circle and Rectangle in the main()
//function.

#include<iostream>
using namespace std;
class Shape{
	protected:
		string color="red";
	public:
	   Shape(string coll){
		color =coll;
	}	
};
class Circle:public Shape{
	private:
		int radius;	
	public:
	 Circle(int ra):Shape("Red"){
		radius=ra;
	}	
	void display(){
		cout<<"The circle radius : "<<radius<<endl;
	}
};
class Rectangle:public Shape{
	private:
		int length;
		int width;
		float Area;
	public:
		Rectangle(int len, int wid) : Shape("Red"){
			length=len;
			width=wid;
		}
		
		int total(){
			Area =  length * width;
			return Area;
		}
	void getdata(){
		cout<<"The length of the rectangle : "<<length<<endl;
		cout<<"The width of the rectangle : "<<width<<endl;
			cout<<"The area of the rectangle : "<<total()<<endl;
	}		
};
int main(){
	Circle circ(5);
	circ.display();
	Rectangle reta(10,15);
	reta.getdata();
	return 0;
}
