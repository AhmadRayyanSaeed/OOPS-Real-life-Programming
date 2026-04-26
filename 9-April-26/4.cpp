// Problem 3: Ride Booking System
// Requirements: ? Users book rides ? Drivers accept rides ? Fare based on distance
// Expected OOP Model:
// Classes: User, Driver, Ride
// Concepts: ? Association between Driver and Ride ? Fare calculation method
// using file headling 

#include<iostream>
#include<fstream>

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
			ofstream user_ride("user.txt", ios::app);
			cout<<endl;
		user_ride<<"User id "<<id<<endl;
		user_ride<<"User name "<<user_name<<endl;
		user_ride.close();
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
			ofstream driver_ride("driver.txt", ios::app);
			cout<<endl;
		driver_ride<<"Driver name "<<name<<endl;
		driver_ride.close();
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
			cout<<"Enter rate per km : ";
			cin>>rate;
		}
		double Fare_calculation(){
		return distance*rate;
	
		}
		void dispaly_ride(){
			ofstream user_ride("user.txt" ,ios::app);
		user_ride<<"Ride number "<<number<<endl;
		user_ride<<"Ride model "<<model<<endl;
		user_ride<<"Ride color "<<color<<endl;
		user_ride<<"Fare:"<<Fare_calculation();
		user_ride.close();
		}	
		
		void dispaly_ride_driver(){
			cout<<endl;
		ofstream driver_ride("driver.txt", ios::app);
	    driver_ride<<"Ride number "<<number<<endl;
	    driver_ride<<"Ride model "<<model<<endl;
		driver_ride<<"Ride color "<<color<<endl;
		driver_ride<<"Fare:"<<Fare_calculation();
		driver_ride.close();
		}
		
		
};


int main(){
	Driver dr;
//	dr.dispaly_dri();
	
	User uss;
	Ride rd;

	int a;
	cout<<"1: User or 2: driver ";
	cin>>a;
	if(a==1){
	uss.get_user();
	rd.get_ride();
	uss.dispaly_user();
	rd.dispaly_ride();
	cout<<"Total Fare: "<<rd.Fare_calculation()<<endl;
	}
	else{
		cout<<endl;
		dr.get_dri();
		rd.get_ride();
		dr.dispaly_dri();
		rd.dispaly_ride_driver();
		cout<<"Total Fare: "<<rd.Fare_calculation()<<endl;
	}

cout<<endl;
//	cout<<endl;
//	uss.dispaly_user();
//	rd.dispaly_ride();
//    cout<<"Total Fare: "<<rd.Fare_calculation()<<endl;

	return 0;
}
