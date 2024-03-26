#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> umur;

    umur["Nisa"] = 22;
    umur["Tegar"] = 25;
    umur["Cici"] = 10;

    cout << "Umur Nisan: " << umur["Nisa"] << endl;
    cout << "Umur Tegar: " << umur["Tegar"] << endl;
    cout << "Umur Cici: " << umur["Cici"] << endl;

    return 0;
}
