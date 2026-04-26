//Problem 2: Banking System
//Requirements: ? Customers have bank accounts ? Perform deposit, withdraw, and check balance
//Expected OOP Model:
//Classes: Customer, Account
//Concepts: ? Encapsulation (balance private) ? Methods for transactions

#include<iostream>
using namespace std;

class Account{
	private:
		int deposit;
		double withdraw;
		double balance;
	
	public:
		void getdata(){
			cout<<"Deposit  = ";
			cin>>deposit;
			cout<<"Withdraw = ";
			cin>>withdraw;
		}
		
		void checkbalnce(){
			balance = deposit - withdraw;
			if(withdraw>=deposit){
		cout<<" Your blance insufficent! "<<endl;
	}
		else{	
		cout<<endl;
			cout<<"   Account Details  "<<endl;
			cout<<" Deposit : "<<deposit<<endl;
			cout<<" Withdraw : "<<withdraw<<endl;
			cout<<" Balance : "<<balance<<endl;
	}
}
				
};

class Customer{
	private:
		string name;
		int acc_id;
	public:
	void data(){
		cout<<"Account id : ";
		cin>>acc_id;
		cout<<"Name is : ";
		cin>>name;		
	}	
	void display(){
		cout<<"Account id : "<<acc_id<<endl;
		cout<<"Name is : "<<name<<endl;
	}
};


int main(){
	Customer cus;
	cus.data();
	cus.display();

	Account acc;
	acc.getdata();
	acc.checkbalnce();

	
	
	
	return 0;
}
