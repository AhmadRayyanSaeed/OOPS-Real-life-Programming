#include<iostream>
using namespace std;

class Time{
	public:
		int hour, mins;
	public:
	class tt_erro{};
	void setdata(){
	cout<<" hour ";
	cin>>hour;
	cout<<" mins ";
	cin>>mins;
	}	
	
	void push(){
		if(mins<0){
			throw tt_erro{};
		}
		else{
			hour += mins / 60;
			mins = mins % 60; 
		}
	}
	void display(){
		cout<<" Time "<<hour<<" hors "<<mins<<" minutes "<<endl;
	}
};

int main(){
	try{
		Time ti;
		ti.setdata();
		ti.push();
		ti.display();
	}
	catch(Time :: tt_erro){
		cout<<"You! entered the wrong data "<<endl;
	}
	
	return 0;
}
