#include <iostream>
using namespace std;

//  struct
struct Mahasiswa {
    string nama;
    string jurusan;
    int umur;
    
    void displayInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Umur: " << umur << endl;
    }
};

int main() {
    Mahasiswa mhs1 = {"Nisa", "Teknik Informatika", 19};
    mhs1.displayInfo();
    
    return 0;
}
