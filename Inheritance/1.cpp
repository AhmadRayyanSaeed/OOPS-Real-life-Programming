// School Management System 
//Problem: Managing students, teachers, and admin staff with shared and unique attributes. 
//Inheritance Solution: Base class Person; derived classes Student, Teacher, Admin. Why 
//useful: Reuse common attributes (name, age) while adding specific ones like grades, 
//subjects, departments.

#include<iostream>
using namespace std;

class Person{
	private:
		int id;
		string name;
		int age;
	public:
	void get_person(){
		cout<<"id ";
		cin>>id;
		cout<<"name ";
		cin>>name;
		cout<<"age ";
		cin>>age;
	}	
	void getdisplay(){
	cout<<"id : "<<id<<endl;
	cout<<"name : "<<name<<endl;
	cout<<"age : "<<age<<endl;}
};


class Student:public Person{
	private:
		int marks;
		string subject;
	public:
	void get_Stu(){
			cout<<" Student details "<<endl;
		cout<<"subject ";
		cin>>subject;
		cout<<"Marks ";
		cin>>marks;
	}	
	void display_stu(){
		cout<<" Student details "<<endl;
		getdisplay();
	cout<<"Subject : "<<subject<<endl;
	cout<<"Marks : "<<marks<<endl;}
};

class Teacher:public Person{
	private:
		string subject;
		string dep;
		int exp;
	public:
		void get_tear(){
				cout<<" Teachers details "<<endl;
		cout<<"suject ";
		cin>>subject;
		cout<<"dep ";
		cin>>dep;
		cout<<"exp ";
		cin>>exp;
	}	
	void display_teac(){
		cout<<" Teachers details "<<endl;
		getdisplay();
	cout<<"Subject : "<<subject<<endl;
	cout<<"Department : "<<dep<<endl;
	cout<<"experience : "<<exp<<endl;}
};

class Admin : public Person{
	private:
		string work;
		string post;
		int year;
	public:
		void get_admin(){
			cout<<" Admin details "<<endl;
		cout<<"work ";
		cin>>work;
		cout<<"Post ";
		cin>>post;
		cout<<"year ";
		cin>>year;
	}	
	void diaplay_add(){
		cout<<" Admin details "<<endl;
		getdisplay();
	cout<<"work : "<<work<<endl;
	cout<<"post : "<<post<<endl;
	cout<<"year : "<<year<<endl;}
};

int main(){
	Student stu;
	stu.get_person();
	stu.get_Stu();
	stu.display_stu();
	cout<<endl;
	Teacher t;
	t.get_person();
	t.get_tear();
	t.display_teac();
	cout<<endl;
	Admin ad;
	ad.get_person();
	ad.get_admin();
	ad.diaplay_add();
	
	return 0;
} 
