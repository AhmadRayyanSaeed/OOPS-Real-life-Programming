// Problem 3: Ride Booking System
// Requirements: ? Users book rides ? Drivers accept rides ? Fare based on distance
// Expected OOP Model:
// Classes: User, Driver, Ride
// Concepts: ? Association between Driver and Ride ? Fare calculation method

#include<iostream>
using namespace  std;

class User{
	private:
		int id;
		string user_name;
	public:
		void get_user(){
			cout<<"User id ";
			cin>>id;
			cout<<"User name ";
			cin>>user_name;
		}
		void dispaly_user(){
		cout<<"User id "<<id<<endl;
		cout<<"User name "<<user_name<<endl;
		}
};

class Driver{
	private:
	string name;
	public:
		void get_dri(){
			cout<<"Driver name ";
			cin>>name;
		}
		void dispaly_dri(){
		cout<<"Driver name "<<name<<endl;
		}	
};

class Ride{
	private:
	string number;
	string model;
	string color;
	double distance;
	double rate;
	public:
		void get_ride(){
			cout<<"Ride number ";
			cin>>number;
			cout<<"model ";
			cin>>model;
			cout<<"color ";
			cin>>color;
			cout<<"Distance ";
			cin>>distance;
			cout<<"Enter rate per km";
			cin>>rate;
		}
		double Fare_calculation(){
		return distance*rate;
		}
		void dispaly_ride(){
		cout<<"Ride number "<<number<<endl;
		cout<<"Ride model "<<model<<endl;
		cout<<"Ride color "<<color<<endl;
		}	
};


int main(){
	Driver dr;
	dr.get_dri();
	dr.dispaly_dri();
	
	User uss;
	uss.get_user();

	Ride rd;
	rd.get_ride();
	
	cout<<endl;
	uss.dispaly_user();
	rd.dispaly_ride();
    cout<<"Total Fare: "<<rd.Fare_calculation()<<endl;

	return 0;
}
