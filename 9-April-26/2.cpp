// Hospital Management System
// Requirements: ? Patients consult doctors ? Doctors prescribe treatments
// Expected OOP Model:
// Classes: Patient, Doctor, Appointment
// Concepts: ? Association between Patient and Doctor ? Appointment scheduling

#include<iostream>
using namespace std;

class Patient{
	private:
		int id;
		string name;
		string desease;
	public:
	void set_patient(){
		cout<<"Id ";
		cin>>id;
		cout<<"name ";
		cin>>name;
		cout<<"desease ";
		cin>>desease;
	}
	void display(){
		cout<<" Patient Id : "<<id<<endl;
		cout<<" Patient Name : "<<name<<endl;
		cout<<" Patient desease : "<<desease<<endl;	
		
	}	
	
	string getname(){
		return name;
	}
};

class Doctor{
	private:
		int id;
		string name;
		int ph_num;
	public:
	void set_de(){
		cout<<"Id ";
		cin>>id;
		cout<<"name ";
		cin>>name;
		cout<<"Ph_num ";
		cin>>ph_num;

	}
	void display(){
		cout<<" Doctor Id : "<<id<<endl;
		cout<<" Doctor Name : "<<name<<endl;
		cout<<" Ph-Num : "<<ph_num<<endl;		
	}	
	string getname(){
		return name;
	}
};

class Appointment{
	private:
		string patient_name;
		string doctor_name;
	public:
	void create_Appointment(Patient pt, Doctor dr){
		patient_name = pt.getname();
		doctor_name = dr.getname();
	}
	void display(){
		cout<<" patient_name : "<<patient_name<<endl;
		cout<<" doctor_name : "<<doctor_name<<endl;		
	}	
};


int main(){
	cout<<"Patient details "<<endl;
	Patient pt;
	pt.set_patient();

	cout<<"Doctors details "<<endl;
	Doctor dr;
	dr.set_de();

	
	Appointment appt;
	appt.create_Appointment(pt,dr);
	
	cout<<"Hospital Real world System "<<endl;
	pt.display();
	dr.display();
	appt.display();
	
	return 0;
}
