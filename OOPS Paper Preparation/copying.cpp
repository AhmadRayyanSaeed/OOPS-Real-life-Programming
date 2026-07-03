#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		double ph_no;
	public:
		Student(string n, double p){
			name = n;
			ph_no = p;
		}
		
	void display();
	Student(const Student &s);	
};

void Student::display(){
	cout<<" Name : "<<name<<endl;
	cout<<" ph_no : "<<ph_no<<endl;
}

 Student::Student(const  Student &s){
	name = s.name;
	ph_no = s.ph_no;
}

int main(){
	Student stt(" Jawad ", 03536);
	Student stt2 = stt;
	stt.display();
	cout<<endl;
	stt2.display();
	
	
	
	return 0;
}
