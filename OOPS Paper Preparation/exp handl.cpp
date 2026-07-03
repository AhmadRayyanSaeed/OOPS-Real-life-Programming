#include<iostream>
using namespace std;

class Student{
	private:
		int id;
		string name;
		string dep;
		float mak[10];
		int n;
	public:
		class marks_error{};
	  	void getdata(){
	  		cin>>id;
	  		cin>>name;
	  		cin>>dep;
	  		cout<<" Subjects marks !  "<<endl;
	  		cin>>n;
	  		for(int a=0; a< n; a++){
	  		cin>>mak[a];	
			}
	  		
		}
		
	float calculate_avg(){
		float sum = 0;
		for(int a=0; a< n;a++){
			sum += mak[a];
	  		
			}
			return sum / n;	
	}	
		
	void setvalues(){
		for(int a=0; a< n; a++){
		  if(mak[a] > 100 || mak[a] < 0){
			throw marks_error{};
         	}
		
	}
			cout<<" You! entered the valid marks "<<endl;
	
	} 
	void display(){
		cout<<" id "<<id<<endl;
			cout<<" name "<<name<<endl;
			cout<<" dep  "<<dep<<endl;
			
			for(int a=0; a<n; a++)
           {
             cout << mak[a] << " "<<endl; }
             
			cout<<" Avg is "<<calculate_avg()<<endl;
	}
};

int main(){
	try{
		Student stud;
		stud.getdata();
		stud.setvalues();
		stud.display();
	}
	catch(Student::marks_error){
		cout<<" Invalid marks! agian entered "<<endl;
	}
	
	return 0;
	
}
