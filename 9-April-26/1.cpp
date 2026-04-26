//Requirements: ? Users add products to cart ? Checkout calculates total bill
//Expected OOP Model:
//Classes: Product, Cart, User
//Concepts: ? Cart contains multiple products ? Total price calculation

#include<iostream>
using namespace std;

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

class Product{
	private:
		int id;
	string pro_name;
	int price;
	public:
	 void get_pro(){
	 	cout<<"Pro id ";
		cin>>id;
		cout<<"Pro name ";
		cin>>pro_name;
		cout<<"Price ";
		cin>>price;
		}
		int get_price(){
			return price;
		}
		void dispaly_pro(){
		cout<<" Pro id "<<id<<endl;
		cout<<" Name "<<pro_name<<endl;
	    cout<<" PRice "<<price<<endl;
		}
	
}; 

class Cart{
	private:
		int total_bill=0;
	public:
	 void add_products(int price){
		total_bill+=price;
	}
	void display(){
		cout<<" Total_bill "<<total_bill<<endl;
	}
		
};

int main(){
	User ur;
	ur.get_user();

		Cart ct;

	int n;
	cout<<"How many products "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
			Product prod;
	prod.get_pro();
	prod.dispaly_pro();
	ct.add_products(prod.get_price());
	}
	

	


		ur.dispaly_user();
			ct.display();
	
	return 0;
}
