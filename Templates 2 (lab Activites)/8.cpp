#include <iostream>
using namespace std;

class Test {
private:
    Test() {
        cout<<"Private Constructor Called"<<endl;
    }

public:
    static Test* createObject() {
        return new Test();
    }

    void show() {
        cout<<"Object Created Successfully"<<endl;
    }
};

int main() {
    Test* obj = Test::createObject(); 

    obj->show();

    return 0;
}
