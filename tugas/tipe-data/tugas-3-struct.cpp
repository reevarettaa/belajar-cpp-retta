#include <iostream>

using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    bool status;
};

int main(){
    Mahasiswa mhs[3] = {
        {"Ella", 21, 3.75, true},
        {"Rhea", 20, 3.20, false},
        {"Eva", 22, 3.85, true}
    };

    cout << "=== Mahasiswa dengan IPK di atas 3.5 ===" << endl;
    cout << boolalpha;

    for (int i = 0; i < 3; i++) {
        if (mhs[i].ipk > 3.5) {
            cout << "Nama   : " << mhs[i].nama << endl;
            cout << "Umur   : " << mhs[i].umur << " tahun" << endl;
            cout << "IPK    : " << mhs[i].ipk << endl;
            cout << "Lulus  : " << mhs[i].status << endl;
            cout << "-----------------------------------" << endl;
        }
    }

    return 0;

}