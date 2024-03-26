#include <iostream>
using namespace std;

float hitungLuasPersegi(float sisi) {
    return sisi * sisi;
}

float hitungKelilingPersegi(float sisi) {
    return 4 * sisi;
}

int main() {
    float sisi;
    
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi;
    
    float luas = hitungLuasPersegi(sisi);
    float keliling = hitungKelilingPersegi(sisi);
    
    cout << "Luas persegi: " << luas << endl;
    cout << "Keliling persegi: " << keliling << endl;
    
    return 0;
}
