#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

	     Complex add(Complex c) {
       Complex temp(0,0);
       temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    
    
//      Complex operator +(Complex c) {
//        Complex temp(0,0);
//        temp.real = real + c.real;
//        temp.imag = imag + c.imag;
//        return temp;
//    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // assume birth day = 12, month = 5
    Complex c1(12, 5);
    Complex c2(10, 3);

    Complex c3 = c1.add(c2);


    cout << "First Complex: ";
    c1.display();

    cout << "Second Complex: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}
