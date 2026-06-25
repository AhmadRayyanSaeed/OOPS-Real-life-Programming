#include <iostream>
using namespace std;

template<typename T>
class Print {
public:
    void show(T val) {
        cout << "Value: " << val << endl;
    }
};

int main() {
    Print<int> p1;
    p1.show(15);

    Print<bool> p2;
    p2.show(true);

    Print<double> p3;
    p3.show(3.68);

    return 0;
}
