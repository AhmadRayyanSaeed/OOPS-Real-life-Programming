#include<iostream>
using namespace std; 


template<class T>
class Stack{
	private:
		T st[100];
		int top;
	public:
	  Stack(){
	  	top = -1;
	  }	
	  void push(T var){
	  	st[++top] = var;
	  }
	  T pop(){
	  return st[top--];
	  }
};

int main(){
	Stack<int> s1;
	s1.push(40);
	s1.push(50);
	s1.push(60);
	s1.push(80);
	
	
	Stack<float> s2;
	s2.push(18.5);
	s2.push(16.5);
	s2.push(13.9);
	s2.push(19.7);
	
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	
	cout<<endl;
	
	cout<<s2.pop()<<endl;
	cout<<s2.pop()<<endl;
	cout<<s2.pop()<<endl;
	cout<<s2.pop()<<endl;
	
	return 0;
}
