#include<iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "Parent" << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Child" << endl;
    }
};


int main(){
	Child c;
	c.show();
	c.show();
}
