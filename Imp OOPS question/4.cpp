#include<iostream>
using namespace std;

class Address{
	private:
		char street[20];
		char city[20];
		int pin;
	public:
	void set_data(){
		cout<<"Street  ";
		cin>>street; 
		cout<<"city  ";
		cin>>city; 
		cout<<"pin  ";
		cin>>pin; 
	}
	void getdata(){
			cout<<"Street  "<<street<<endl; 
		cout<<"city  "<<city<<endl; 
		cout<<"pin  "<<pin<<endl; 
	}	
};

class Student:public Address{
	private:
		int sid , a;
		string name;
		int arr[];
	public:
	void getdataa(){
		cout<<"sid ";
		cin>>sid;
		cout<<"name ";
		cin>>name;
		cout<<"How many sub ";
		cin>>a;
		for(int i=1;i<=a;i++){
			cout<<"marks";
		cin>>arr[i];
		}
	}	
	void display(){
		cout<<"sid "<<sid<<endl;
		cout<<"name "<<name<<endl;
		for(int i=1;i<=a;i++){
			cout<<"marks";
		cout<<arr[i];
		}
	}
};

int main(){
	Student stt;
	stt.set_data();
	stt.getdata();
	int c;
	cout<<"how any stu "<<endl;
	cin>>c;
	for(int j=1;j<=c;j++){
	stt.getdataa();
}
stt.display();
}
