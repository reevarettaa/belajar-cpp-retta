#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Integer (Bilangan Bulat)
    int umur = 25;
    int suhu = -5;

    // 2. Floating Point & Double (Bilangan Desimal)
    float ipk = 3.75f;           // Tambahkan akhiran 'f' untuk float
    double pi = 3.1415926535897;

    // 3. Character (Karakter Tunggal)
    char nilaiHuruf = 'A';

    // 4. Boolean (Kebenaran)
    bool isLulus = true;

    // 5. String (Teks/Kumpulan Karakter)
    string nama = "Budi Santoso";

    // Menampilkan nilai variabel
    cout << "=== Demonstrasi Tipe Data C++ ===" << endl;
    cout << "Nama          : " << nama << endl;
    cout << "Umur          : " << umur << " tahun" << endl;
    cout << "Suhu          : " << suhu << " derajat C" << endl;
    cout << "IPK           : " << ipk << endl;
    cout << "Nilai Pi      : " << pi << endl;
    cout << "Nilai Huruf   : " << nilaiHuruf << endl;
    cout << "Status Lulus  : " << boolalpha << isLulus << endl; // boolalpha menampilkan "true"/"false"

    cout << "\n=== Ukuran Memori (System-Dependent) ===" << endl;
    cout << "Ukuran int    : " << sizeof(int) << " Byte" << endl;
    cout << "Ukuran float  : " << sizeof(float) << " Byte" << endl;
    cout << "Ukuran double : " << sizeof(double) << " Byte" << endl;
    cout << "Ukuran char   : " << sizeof(char) << " Byte" << endl;
    cout << "Ukuran bool   : " << sizeof(bool) << " Byte" << endl;

    return 0;
}