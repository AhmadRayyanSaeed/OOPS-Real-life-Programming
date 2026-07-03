#include<iostream>
using namespace std;

class Distance{
	private:
		int centimeters;
		int meter;
		
	public:
	
	void getdata(){
		cout<<" meter. : ";
		cin>>meter;
		cout<<" centimeters : ";
		cin>>centimeters;
	}	
	
	void display(){
		cout<<" meter. : "<<meter<<endl;
		cout<<" centimeters : "<<centimeters<<endl;
	}
	
	
//	Distance culcultaed_distance(Distance d1, Distance d2)
	
	Distance operator +(Distance d1)
	{
		Distance temp;
		
		temp.centimeters = centimeters + d1.centimeters;
		temp.meter = meter + d1.meter;
		
		if(temp.centimeters >= 100){
			temp.meter += temp.centimeters / 100;
		temp.centimeters = temp.centimeters  % 100;
		}
		 
		return temp;
	}
	
};

int main(){
	Distance D1, D2 , D3;
	D1.getdata();
	D2.getdata();
	
	D3 = D1 + D2;
	D3.display();
	

	
	return 0;
}


