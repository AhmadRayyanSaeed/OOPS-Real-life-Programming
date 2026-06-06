#include<iostream>
using namespace std;

class BankAccount{
	private:
		double amount_bal;
		double withdraw;
		
	
	public:
	 class withdraw_error{};
	 class withdraw_aom{};
	 class bala_error{};
	 class app_error{};
	
	
	void setdata(){
		cout<<" Amount_bal ";
		cin>>amount_bal;
		cout<<" withdraw ";
		cin>>withdraw;
	}
	
	void neg1(){
		if(withdraw < 0){
			throw withdraw_error{};
		}
	}
	
	void neg2(){

		if(withdraw == 0){
			throw withdraw_aom{};
		}

	}
	
	void neg3(){
		if(withdraw > amount_bal){
			throw bala_error{};
		}
		else{
			amount_bal -= withdraw; 
			cout<<" Remaining Balance = "<<amount_bal<<endl;
		}
	}

void neg4(){
	if( withdraw > 25000){
			throw app_error{};
	}
}
};


int main(){
	try{
		BankAccount bkcc;
		bkcc.setdata();
		bkcc.neg1();
		bkcc.neg2();
			bkcc.neg4();
		bkcc.neg3();
	
	}
	
	
	catch(BankAccount :: withdraw_error){
		cout<<" Error: Withdrawal amount cannot be negative. "<<endl;
	}
	
	catch(BankAccount :: withdraw_aom){
		cout<<" Error: Withdrawal amount cannot be zero. "<<endl;
	}
	
	catch(BankAccount :: bala_error){
		cout<<" Error: Insufficient balance. "<<endl;
	}
	
	catch(BankAccount :: app_error){
		cout<<" Error: Transaction limit exceeded. "<<endl;
	}
	
	return 0;
}
