// Student Result Management System
//Requirements:
//? Store marks of subjects ? Calculate grade and GPA
//Expected OOP Model:
//Classes: Student, Subject, Result
//Concepts: ? Composition (Result contains Subjects) ? GPA calculation

#include<iostream>
#include<string>
using namespace std;
class Student{
	private:
		int id;
		string name;
		int class_no;
	public:
		void stud_get(){
		cout<<"Id ";
		cin>>id;
		cout<<"name ";
		cin>>name;
		cout<<"class ";
		cin>>class_no;
	}
	void getdisp(){
		cout<<" Student Id : "<<id<<endl;
		cout<<" Student Name : "<<name<<endl;
		cout<<" Student class : "<<class_no<<endl;	
	}			
};

class Subject{
	public:
	string name;
	int marks;
	

	void get_sub(){
		cout<<"subject name is ";
		cin>>name;
		cout<<" Marks ";
		cin>>marks;
	}
};


class Result{
	private:
		Subject s[10];
		int n;
		float gpa;
		
	public:
	void input(){
		cout<<"How many subject "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		s[i].get_sub();
	}
}

float calculateGPA(){
	int total=0;
	
	for(int i=0;i<n;i++){
		total+=s[i].marks;
	}

gpa=(total/(float)n)/25;
return gpa;
}

void display(){
	cout<<"Subject : ";
	for(int i=0; i<n; i++){
		cout<<s[i].name<<" : "<<s[i].marks<<endl;
	}

cout<<"GPA: "<<calculateGPA()<<endl;
}
};

int main(){
	Subject st;
	st.get_sub();
	
	Result r;
	r.input();


	st.get_sub();
	r.display();
	
	return 0;
}
