#include<iostream>
using namespace std;

class Distance{
	private:
		int feet;
		int inches;
	public:
	 void  Distancesss(){
	  	cin>>feet;
	  	cin>>inches;
	  }	
	  void get_display(){
	  	cout<<" Feet : "<<feet<<endl;
	  	cout<<" Inches: "<<inches<<endl;
	  }


//	simple method
// Distance calculate(Distance d1,Distance d2)
// in the main  d3= d1.calculate(d1,d2); 
  

// Operator overloading
	   Distance operator +(Distance d1){
	   	
	  	Distance temp;
	  	
	  	temp.feet = feet + d1.feet;
	  	temp.inches = inches + d1.inches;
	  	
	  	if(temp.inches>=60){
	  		temp.feet += temp.inches / 60;
	  		temp.inches = temp.inches % 60;
		  }
	  	return temp;
	  }
};

int main(){
	
	Distance d1,d2,d3;
	d1.Distancesss();
	d2.Distancesss();
	
	d3 = d1+ d2;
	d3.get_display();

	
	
	return 0;
}
