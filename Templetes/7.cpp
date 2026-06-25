#include<iostream>
using namespace std;

template<class x>
class alpha{
	private:
		x num1, num2;
	public:
	void getdata(){
		cin>>num1;
		cin>>num2;
	}	
	void display(){
		if(num1>num2){
			cout<<" Num 1  is greater "<<endl;
		}
		else
		cout<<" Num 2 is greater "<<endl;
	}
};

int main(){
	cout<<"for float "<<endl;
	alpha <float> alp1;
	alp1.getdata();
	alp1.display();
	
	cout<<"for int "<<endl;
	
	alpha <int> alp2;
	alp2.getdata();
	alp2.display();
	return 0;
}
