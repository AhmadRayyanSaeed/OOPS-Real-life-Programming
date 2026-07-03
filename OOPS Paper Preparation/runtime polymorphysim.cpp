//Create a base class Shape with a public virtual method calculateArea() to compute the area
//of a shape. Derive classes Circle and Rectangle from Shape, overriding the calculateArea()
//method to compute the area specific to each shape. Demonstrate polymorphism by calling
//calculateArea() on objects of both Circle and Rectangle using base class pointers or
//references.

#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void calculateArea() = 0;
};

class Circle: public Shape{
	private:
		double Area;
		int rad = 35;
	public:
	 void calculateArea() override{
		Area = 3.14 * rad * rad;
		cout<<"Area "<<Area<<endl;
	}
};

int main(){
	Shape *p = new Circle();
		p->calculateArea();
	
	return 0;
}
