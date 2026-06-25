#include <iostream>
using namespace std;

class Student {
public:
    string name;
    static int count;

    Student(string n) : name(n) {
        count++;
    }
};

int Student::count = 0;

int main() {
    Student s1("Ali");
    Student s2("Usman");
    Student s3("Hassan");

    cout << "Total Students: " << Student::count << endl;

    return 0;
}
