// Car Rental System
//Simulate renting cars.
//- Class Car with attributes: car name, price per day, availability.
//- Constructor (Default, overloaded and copy) to initialize values.
//- Function to rent a car (update availability).
//- Function to calculate total rent for given days.(Implement outside class)

#include<iostream>
using namespace std;

class Car{
	private:
		string name;
		int per_day;
		bool availability;
		
	public:
	Car(){
	}
//	Car(string n,int pd, bool av){
//		name = n;
//		per_day = pd;
//		availability = av;
//	}

void getdata(){
	cout<<"Name  "; 
	cin>>name;
	cout<<"Per_day ";
	cin>>per_day;
	   cout<<"Available (1/0): ";
        cin>>availability;
}
	Car(const Car &c){
		name=c.name;
		per_day=c.per_day;
		availability=c.availability;
	}	
	void rent_car(){
	if(availability == true){
		availability = false;
		cout<<name<<" is now rented "<<endl;
}
	else
		cout<<name<<" is not rented "<<endl;
	
	}
	
	void display(){
		cout<<"Car Deails "<<endl;
		cout<<"Name of the car "<<name<<endl;
		cout<<"Price per day "<<per_day<<endl;
		cout<<"Availability: "<<(availability ? "Yes" : "No") <<endl;
	}

	float get(){
		return per_day; 
	}
};

	float culculate(float per_day,int days){
		return per_day * days;
	}
	
int main(){
//	 Car c1("Toyota Corolla", 5000, true);
Car c1;
c1.getdata();

    c1.display();
    c1.rent_car();
    
    int days;
    cout<<"Enter days: ";
    cin>>days;

    cout<<"Total Rent: "<<culculate(c1.get(),days)<<endl;
    
return 0;
	
}
