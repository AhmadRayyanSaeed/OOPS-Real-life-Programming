// Create a banking class where initial balance = sum of your birth day + month, 
// then deposit/withdraw. 

#include<iostream>
using namespace std;

class Banking{
	private:
	double blance;
	public:
			int bith;
		int month;
	void set_data(){
		cout<<"birth ";
		cin>>bith;
		cout<<" month ";
		cin>>month;
		
		blance = bith + month;
	}	
	
	void add(double amount){
		blance += amount ;		 
	}
	
	void diposit(double amount){
		 if(amount>=blance)
		 cout<<"insufficent balance ";
		 else
		 blance -= amount;	
	}
	void display(){
		cout<<" My account balance is "<<blance<<endl;
	}	
};

int main(){
	Banking b1;
	b1.set_data();
	b1.display();
	
	b1.add(1000);
	b1.display();
	
	b1.diposit(5000);
	b1.display();
	

	return 0;
}
