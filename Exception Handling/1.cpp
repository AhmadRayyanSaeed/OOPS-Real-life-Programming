#include<iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    void input() {
        cout << "Enter feet: ";
        cin >> feet;

        cout << "Enter inches: ";
        cin >> inches;

        if (inches < 0) {
            cout << "Error: Inches cannot be negative!" << endl;
            exit(0);
        }

        // Convert extra inches into feet
        feet += inches / 12;
        inches = inches % 12;
    }

    void display() {
        cout << "Distance = "
             << feet << " feet "
             << inches << " inches" << endl;
    }
};

int main() {
    Distance d;

    d.input();
    d.display();

    return 0;
}
