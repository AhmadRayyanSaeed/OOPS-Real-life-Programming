// Problem: Different salary calculations for different roles. Inheritance Solution: Base class 
// Employee; derived classes Manager, Developer, Intern. Why useful: Base salary shared, 
// with bonuses, overtime, or stipend handled separately.

#include<iostream>
using namespace std;

class Employee{
	protected:
		int id;
		string name;
		double base_sal;
	public:
	void get_emplo(int i, string n, double bs){
		id=i;
		name=n;
		base_sal=bs;
	}	
	void display(){
		cout<<" Id : "<<id<<endl;
		cout<<" name : "<<name<<endl;
		cout<<" base_Sal : "<<base_sal<<endl;
	}
};

class Manager:public Employee{
	private:
		double bonus=0;
		
	public:
	void set_man(int i, string n, double bs,double bo){
		get_emplo(i,n,bs);
		bonus=bo;
	}
	
	double total_Sal(){
		return  base_sal+bonus;
	}	
	
	void man_display(){
		display();
		cout<<"Bonous "<<bonus<<endl;
		cout<<"Total Salery "<<total_Sal()<<endl;
	}
};


class Developer : public Employee{
	private:
		double overtime;
	public:
	void set_deve(int i, string n, double bs,double bo){
		get_emplo(i,n,bs);
		overtime=bo;
	}
	double totla_over(){
		return base_sal+overtime;
	}
	
	void display_dev(){
		display();
		cout<<"over time : "<<overtime<<endl;
		cout<<"Total_over : "<<totla_over()<<endl;
	}
};

class Intern :public Employee{
	private:
		double inte;
	public:
	void set_intt(int i, string n, double bs,double bo){
		get_emplo(i,n,bs);
		inte=bo;
	}
	double totla_intt(){
		return base_sal+inte;
	}
	
	void display_intt(){
		display();
		cout<<"Intern : "<<inte<<endl;
		cout<<"Total_over : "<<totla_intt()<<endl;
	}
};

int main(){
	Manager m;
	m.set_man(1,"Ahmad",10000,5000);
	m.man_display();
	
	    cout<<endl;
	
	Developer dev;
	dev.set_deve(3,"Ali",5000,2500);
	dev.display_dev();
	
	    cout<<endl;
	
		Intern i;
	i.set_intt(1,"Hanii",2000,500);
	i.display_intt();

    return 0;
}
