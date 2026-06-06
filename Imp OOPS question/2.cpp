#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // Green color
    cout << "Hello World";

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // Default color
    return 0;
}
