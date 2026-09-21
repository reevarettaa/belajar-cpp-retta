#include <iostream>

using namespace std;

int pertambahan(int a, int b) {
    return a + b;
}

int pengurangan (int a, int b) {
    return a - b;
}

int perkalian (int a, int b) {
    return a * b;
}

float pembagian (int a, int b){
    float x = a;
    float y = b;
    return x / y;
}

float luas_segitiga (int a, int t){
    float x = a;
    float y = t;
    return 0.5 * x * y;
}

void cetakhasil(int x){
    cout << "hasil = " << x << endl;
}

void cetakhasildesimal(float x) {
    cout << "hasil = " << x << endl;
}

int main(){
    // masukkan
    int a;
    int b;
    int alas;
    int tinggi;
    int hasil_pertambahan;
    int hasil_pengurangan;
    int hasil_perkalian;
    float hasil_pembagian;
    float hasil_luas_segitiga;
    
    cout << "masukkan input a : ";
    cin >> a;
    cout << "masukkan input b : ";
    cin >> b;

    hasil_pertambahan = pertambahan(a, b);
    hasil_pengurangan = pengurangan(a, b);
    hasil_perkalian = perkalian(a, b);
    hasil_pembagian = pembagian(a, b);

    cetakhasil(hasil_pertambahan);
    cetakhasil(hasil_pengurangan);
    cetakhasil(hasil_perkalian);
    cetakhasildesimal(hasil_pembagian);

    cout << "masukkan alas : ";
    cin >> alas;
    cout << "masukkan tinggi : ";
    cin >> tinggi;

    hasil_luas_segitiga = luas_segitiga(alas, tinggi);

    cetakhasildesimal(hasil_luas_segitiga);

    return 0;
}