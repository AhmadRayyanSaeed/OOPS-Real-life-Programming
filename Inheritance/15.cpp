#include<iostream>
using namespace std;

class Test {
public:
    int *p;

    Test(int x) {
        p = new int(x);
    }

    // deep copy constructor
    Test(const Test &t) {
        p = new int(*t.p);
    }
};

int main() {
    Test t1(10);
    Test t2 = t1; 

    *t2.p = 50;

    cout << *t1.p << endl; 
    cout << *t2.p << endl; 
}
