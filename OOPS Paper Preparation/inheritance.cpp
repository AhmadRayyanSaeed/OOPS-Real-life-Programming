//Define a base class Vehicle with private member variables model and year, and a public
//method displayDetails() to display these values. Create a derived class Car that inherits
//from Vehicle and adds a public method startEngine() to start the car’s engine. Demonstrate
//using both base class and derived class members in the main() function.

#include<iostream>
using namespace std;

class Vehicle{
	private:
		int vhmode;
		int year;
		public:
			void setdata(){
				cin>>vhmode;
				cin>>year;
			}
		void displayDetails(){
			cout<<"vh mode"<<vhmode<<endl;
			cout<<" year "<<year<<endl;
		}	
};

class Car: public Vehicle{
	public:
		void startEngine(){
			cout<<"This is the Engine are used in the car "<<endl;
		}
};

int main(){
	Car c;
	c.setdata();
	c.startEngine();
	c.displayDetails();
}
