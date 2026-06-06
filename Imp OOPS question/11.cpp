// insertaion

#include<iostream>
#include<fstream>
using namespace std;
 
class Time{
	private:
		float hours;
		float mins;
		float sec;
	
	public:
		void setdata(float h, float m, float s){
			hours = h ;
			mins = m ;
			sec = s ; 
		}
		
		friend ostream& operator<<(ostream& out, Time t);
			
}; 

	ostream& operator << (ostream& O, Time T){
			O<<" Hours "<<T.hours<<" : "<<" Mins "<<T.mins<<" : "<<" Sec "<<T.sec;
			return O;
		}


int main(){
	Time tt;
	tt.setdata(20,30,45);
	cout<<tt;
	

	return 0;
}
