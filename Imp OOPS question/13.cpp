// Extraction 

#include<iostream>
using namespace std;

class Time{
	private:
		float hour, mins , sec;
		
	public:
   
   friend istream& operator >>(istream& i, Time &v);
   
   friend ostream& operator <<(ostream& o, Time mm);
};

istream& operator >>(istream& i, Time &v){
	i>>v.hour>>v.mins>>v.sec;
	return i;
}

ostream& operator <<(ostream& o, Time mm){
  o<<"Hour "<<mm.hour<<" : "<<mm.mins<<" : "<<mm.sec<<" : ";
  return o;

}

int main()
{
	Time t2;
	cout << "Enter time (hour min sec): ";
	cin>>t2;
	
	cout<<t2;
	return 0;
}
