#include<iostream>
using namespace std;

class A{
	private:
		int x=10;
	public:
		
	 friend void show(A ob);	
};

void show(A ob){
		cout<<ob.x;
}
 
 int main(){
 	A t1;
 	show(t1);
 }
