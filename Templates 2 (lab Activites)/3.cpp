#include <iostream>
using namespace std;

template<typename T>
class Print {
public:
    void show(T val) {
        cout<<"Generic: "<< val << endl;
    }
};

template<>
class Print<bool> {
public:
    void show(bool val) {
        cout << "Bool: " <<(val ? "true" : "false")<< endl;
    }
};

int main() {
    Print<int> p1;
    p1.show(56);

    Print<bool> p2;
    p2.show(true);

    return 0;
}
