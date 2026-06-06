#include<iostream>
using namespace std;

class person{
	protected:
		string name;
		int age;
		
	public:
	person(string n, int a){
		name = n;
		age = a;
	}	
};
class student:public person{
	private:
		string subj;
	public:
	  student(string n, int g,string j):person(n,g){
	  	subj = j ;
	  }	
	  
	 void getter(){
	 	cout<<"name "<<name<<endl;
	 	cout<<"age "<<age<<endl;
	 	cout<<"subject "<<subj<<endl;
	 } 
};

int main(){
	student sss("ahmad",20,"Hit gate 5");
	sss.getter();
	
	return 0;
}
