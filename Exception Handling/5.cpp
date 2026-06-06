#include<iostream>
using namespace std;

class Temperature{
	private:
		int tem;
	public:
	class temps_error{};
	void set(){
		cout<<" Tempereture ";
		cin>>tem;
	}	
	void push(){
	if(tem < -50 || tem > 150 ){
		throw temps_error{}; 
	}
	else{
		cout<<"You enter the correct data "<<endl;;
	}
    }
};

int main(){
	try{
	Temperature tp;
	tp.set();
	tp.push();

	}
	catch(Temperature ::temps_error ){
		cout<<" Temperatur out of Range! ";
	}
	
	return 0;
}
