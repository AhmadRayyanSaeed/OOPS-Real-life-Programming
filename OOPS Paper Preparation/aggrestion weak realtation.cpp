#include <iostream>
using namespace std;

class Teacher {
public:
    string name;
    string sub;

    Teacher(string n,string s) {
        name = n;
        sub = s;
    }
};

class Department {
private:
    Teacher *teacher;    // Aggregation

public:
    Department(Teacher *t ) {
        teacher = t;
    }

    void display() {
        cout << "Teacher: " << teacher->name << endl;
        cout << "Subject: " << teacher->sub << endl;
    }
};

int main() {
    Teacher t("Ahmad"," Algebara ");
    Department d(&t);

    d.display();

    return 0;
}
