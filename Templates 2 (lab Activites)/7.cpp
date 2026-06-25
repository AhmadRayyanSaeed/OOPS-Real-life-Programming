#include <iostream>
#include <string>
using namespace std;

class DatabaseConnection {
private:
    static DatabaseConnection* instance;
    DatabaseConnection() {
        cout << "Connection opened." << endl;
    }

public:
    static DatabaseConnection* getInstance() {
        if (!instance) {
            instance = new DatabaseConnection();
        }
        return instance;
    }

    void query(string q) {
        cout << "Executing: " << q << endl;
    }
};

// Static member definition
DatabaseConnection* DatabaseConnection::instance;

int main() {
    DatabaseConnection* db1 = DatabaseConnection::getInstance();
    DatabaseConnection* db2 = DatabaseConnection::getInstance();

    db1->query("SELECT * FROM students");

    cout << (db1 == db2 ? "Same" : "Different")
         << " instance." << endl;

    return 0;
}
