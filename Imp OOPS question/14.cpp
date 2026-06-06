// operator overloading
#include<iostream>
using namespace std;

class Distance{
	private:
		float inches;
		float feet;
	public:
		void gett(float i, float f){
			inches = i;
			feet = f;
		}
		//d3 = d1 + d2;
		Distance operator +(Distance d){
			Distance temp;
			temp.inches = inches + d.inches;
			temp.feet = feet + d.feet;
			return temp;
		}
		
		//d3 = d1 - d2;
		Distance operator -(Distance dc){
			Distance tem;
			tem.inches= inches -dc.inches;
			tem.feet=feet - dc.feet;
		return tem;
		}
		
		//d3=d1*d2;
			Distance operator *(Distance dc){
			Distance tem;
			tem.inches= inches * dc.inches;
			tem.feet=feet * dc.feet;
		return tem;
		}
		
		
		//d3 = d2+7;
		Distance operator +(int x){
			Distance tamo;
			tamo.inches = inches + x;
			tamo.feet = feet;
			return tamo;
		}
		
		//pre increnment 
		Distance operator ++(){
			inches ++;  	
		}
		
		//post increnment 
		Distance operator ++(int ){
			Distance tk;
			inches ++;  
			return tk;	
		}
		
		
		void getter(){
			cout<<" inches "<<inches<<endl;
			cout<<" feet "<<feet<<endl;
		}
		
};

int main(){
	Distance d1, d2, d3;
	d2.gett(40,50);
	
	d3.gett(10,30);
//	
//	d1 = d2+d3;
//	d1.getter();
//	
//	d2=d3; 
//		 
//	d3 = d2 + 7;
//	d3.getter();
//	cout<<endl;
	
	
	d1 = d2*d3;
	d1.getter();
	cout<<endl;
	
//	d1 = d2 - d3;
//	d1.getter();
	 
//	 cout<<endl;
//	
//	++d1;
//	d1.getter();
//	cout<<endl;
//	d1++;
//	d1.getter();

	
}
