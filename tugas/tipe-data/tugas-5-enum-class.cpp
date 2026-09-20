#include <iostream>

using namespace std;

enum StatusPembayaran {
    BELUM_BAYAR,
    LUNAS,
    MENUNGGAK
};

class Siswa {
public:
    string nama;
    StatusPembayaran status;

    Siswa(string n, StatusPembayaran s) {
        nama = n;
        status = s;
    }

    void tampilkanStatus() {
        cout << "Nama   : " << nama << endl;
        cout << "Status : ";

        switch (status) {
            case BELUM_BAYAR:
                cout << "Belum Bayar" << endl;
                break;
            case LUNAS:
                cout << "Lunas" << endl;
                break;
            case MENUNGGAK:
                cout << "Menunggak" << endl;
                break;
        }
        cout << "-----------------------------------" << endl;
    }
};

int main(){
    Siswa siswa1("Ella", LUNAS);
    Siswa siswa2("Rhea", BELUM_BAYAR);
    Siswa siswa3("Eva", MENUNGGAK);

    cout << "=== Status Pembayaran Siswa ===" << endl;

    siswa1.tampilkanStatus();
    siswa2.tampilkanStatus();
    siswa3.tampilkanStatus();

    return 0;
}