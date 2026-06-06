#include<iostream>
using namespace std;

class  Frustum{
	private:
		float  r1,r2,r3,h,v;
	public:
	void set_data(){
		cout<<"Radius r1 : ";
		cin>>r1;
		cout<<"Radius r2 : ";
		cin>>r2;
		cout<<"Radius r3 : ";
		cin>>r3;
		cout<<"Height h : ";
		cin>>h;
	}	
	float culculation(){
		v= ( 1.0/3 )  * 3.14 * h * (r1*r1 + r1*r2 + r2*r2);
		return v;
	}
	void display(){
		cout<<"Radius r1 : "<<r1<<endl;
		cout<<"Radius r2 : "<<r2<<endl;
		cout<<"Radius r3 : "<<r3<<endl;
		cout<<"Height h : "<<h<<endl;
		cout<<"V is "<<culculation()<<endl;
	}
};

int main(){
	Frustum f;
	f.set_data();
	f.display();
	return 0;
}
