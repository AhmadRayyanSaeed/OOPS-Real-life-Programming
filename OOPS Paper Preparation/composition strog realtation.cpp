#include <iostream>
using namespace std;

class Room {
public:
    Room() {
        cout << "Room Created" << endl;
    }

    ~Room() {
        cout << "Room Destroyed" << endl;
    }
};

class House {
private:
    Room room;   // Composition

public:
    House() {
        cout << "House Created" << endl;
    }

    ~House() {
        cout << "House Destroyed" << endl;
    }
};

int main() {
    House h;
    return 0;
}
