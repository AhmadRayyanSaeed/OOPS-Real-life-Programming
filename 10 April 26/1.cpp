// Problem 1: Online Food Delivery System 10 APRIL 2026
// Requirements: Customers can place orders ? Restaurants prepare food
// Delivery riders deliver orders
// Expected OOP Model:
// Classes: Customer, Restaurant, MenuItem, Order, DeliveryRider
// Concepts:  Customer places Order ? Restaurant has MenuItems ? Order assigned to Rider
#include<iostream>
using namespace std;

class Delivery_rider{
	private:
		int id;
		string name;
	public:
	void rid_details(){
		cout<<"Rider Details"<<endl;
		cout<<" id ";
		cin>>id;
		cout<<" Name : ";
		cin>>name;
	}
	void display_rider(){
		cout<<"Delivery_Rider is : "<<id<<endl;
		cout<<" Delivery_Rider Name : "<<name<<endl;
	}	
};


class Order {
	private:
		int ord;
	public:
	void oddr_item(){
		cout<<" Order karo ! ";
		cin>>ord;
		switch(ord){
			case 1: cout<<" Sandwich done "<<endl;
			break;
			case 2: cout<<" Fries done "<<endl;
			break;
			case 3: cout<<" Pasta done "<<endl;
			break;
			case 4: cout<<" Shawarma done "<<endl;
			break;
			case 5: cout<<" Nuggests done "<<endl;
			break;
			case 6: cout<<" Biryani done "<<endl;
			break;
			
			default:
			cout<<" Any Other Food ! Choose "<<endl;
			cin>>ord;
		}
}
	void display_oddr(){
		cout<<"Your order is : "<<ord<<endl;
	}
};

class Menu_Item{
	public:	
	void men_display(){
		cout<<"Menu Items "<<endl;
		cout<<" 1: Sandwich"<<endl;
		cout<<" 2: Fries"<<endl;
        cout<<" 3: Pasta"<<endl;
        cout<<" 4: Shawarma"<<endl;
        cout<<" 5: Nuggets"<<endl;
        cout<<" 6: Biryani"<<endl;
	}
};

class Customer{
	private:
	int id;
	string name;
	string address;
	public:
		void getdata(){
			cout<<" Id : ";
			cin>>id;
			cout<<" Name : ";
			cin>>name;
			cout<<" Address : ";
			cin>>address;
		}
	void cust_deta(){
		cout<<"Customer id is : "<<id<<endl;
		cout<<"Customer name is : "<<name<<endl;
		cout<<"Customer address is : "<<address<<endl;
	
	}
};

class Restaurant: public Menu_Item{
	private:
		string name;
		string location;
	public:
	void get_res(string n, string loc){
		name = n;
		location = loc;		
	}	
	void res_display(){
		cout<<endl;
		cout<<" Resturant name is : "<<name<<endl;
		cout<<" Resturant Location  is : "<<location<<endl;
		men_display();
	}
};


int main(){

	Restaurant res;
	res.get_res("AWAN","RHU COLONY NEAR BILAL MAJSID");
	res.res_display();
	
	cout<<endl;

	Delivery_rider deri;
deri.rid_details();

	cout<<endl;
	
	Order oer;
	oer.oddr_item();

	Customer c;
	cout<<" Customer Details "<<endl;
	c.getdata();

cout<<endl;
	cout<<" RECEIPT "<<endl;
    c.cust_deta();
    oer.display_oddr();
    deri.display_rider();
	
	return 0;
}


