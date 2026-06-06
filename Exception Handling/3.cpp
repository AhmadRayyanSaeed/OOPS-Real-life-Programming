#include<iostream>
using namespace std;

class Weight{
	public:
		int kg, grams;
	public:
	class grams_erro{};
	void setdata(){
	cout<<" kg ";
	cin>>kg;
	cout<<" grams ";
	cin>>grams;
	}	
	
	void push(){
		if(grams<0){
			throw grams_erro{};
		}
		else{
			kg += grams / 1000;
			grams = grams % 1000; 
		}
	}
	void display(){
		cout<<" weight "<<kg<<" kg "<<grams<<" grams"<<endl;
	}
};

int main(){
	try{
		Weight wei;
		wei.setdata();
		wei.push();
		wei.display();
	}
	catch(Weight :: grams_erro){
		cout<<"You! entered the wrong data "<<endl;
	}
	
	return 0;
}
