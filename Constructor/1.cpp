#include<iostream>
using namespace std;

class Factorial{
	private:
		int N;
		int F;
	
	public:
		Factorial(){F = 1;}
	void get(){
		cout<<"Enter the Number "<<endl;
		cin>>N;
	}	
	void fec(){
		for(int i=N;i>1;i--)
		F*=i;
	}
	void display(){
		cout<<N<<"factorial  is  "<<F<<endl;
	}
};

int main(){
	Factorial fa;
	fa.get();
	fa.fec();
	fa.display();
}
