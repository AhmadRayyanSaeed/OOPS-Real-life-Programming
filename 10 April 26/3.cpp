//Problem 2: Banking System
//Requirements: ? Customers have bank accounts ? Perform deposit, withdraw, and check balance
//Expected OOP Model:
//Classes: Customer, Account
//Concepts: ? Encapsulation (balance private) ? Methods for transactions

#include<iostream>
using namespace std;

class Account{
	private:
	double balance;
	
	public:
		void set_balance(double b){
			balance = b;
		}
		
		void deposit(double amount){
			balance+=amount;
			cout<<"Deposit is : "<<amount<<endl;	
		}
		
		void with_draw(double amount){
			if(amount>balance){
				cout<<" Insufficient Balance!"<<endl;
			}
			else{
				balance-=amount;
				cout<<" Withdraw "<<amount<<endl;
			}
		}
		void check_balance(){
			cout<<"Current Balance : "<<balance<<endl;
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
cout<<endl;

Account acc;

double ini;
cout<<"Enter the balance "<<endl;
cin>>ini;
acc.set_balance(ini);

int cho;
double amount;

cout<<"\n1.Deposit  2.Withdraw  3.Check Balance\n";
    cin>>cho;

switch(cho){
	case 1: cout<<"Enter amount deposit ";
	cin>>amount;
	acc.deposit(amount);
	break;
	
	case 2: cout<<"Enter amount withdraw ";
	cin>>amount;
	acc.with_draw(amount);
	break;
	
	case 3:
	acc.check_balance();
	break;
	
	default:
		cout<<"Invaid data";
		
}
	
	cout<<"Account details "<<endl;
	cus.display();
	acc.check_balance();
	
	return 0;
}
