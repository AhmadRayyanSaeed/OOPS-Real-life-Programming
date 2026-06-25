#include <iostream>
using namespace std;
const int MAX = 100;  

template<class T>
class stack{
	private:
		T st[100];
		int top;
	public:
	stack(){ top = -1;}
	void push(T var){
		st[++top] = var;
	}	
	T pop(){
	return st[top--];
	}
};

int main(){
	stack<float> st1;
	st1.push(8.5);
	st1.push(3.5);
	st1.push(4.6);
	cout<<" 1: "<<st1.pop()<<endl;
	cout<<" 2: "<<st1.pop()<<endl;
	cout<<" 3: "<<st1.pop()<<endl;
	
	cout<<endl;
	
	stack<int> st2;
	st2.push(9);
	st2.push(6);
	st2.push(2);
	cout<<" 1: "<<st2.pop()<<endl;
	cout<<" 2: "<<st2.pop()<<endl;
	cout<<" 3: "<<st2.pop()<<endl;
}
