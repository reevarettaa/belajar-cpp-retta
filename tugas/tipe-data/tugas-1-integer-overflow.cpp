#include <iostream>

using namespace std;

int main(){
    unsigned int a = 0;
    cout << a - 1 << endl; 
    /***
     * karena nilai unsigned int akan selalu bernilai positif, maka ketika kita mengurangi 1 dari 0,
     * hasilnya akan menjadi nilai maksimum dari tipe data unsigned int, yaitu 4294967295. Hal ini terjadi karena unsigned int menggunakan representasi biner untuk menyimpan nilai, dan ketika kita mengurangi 1 dari 0, bit paling signifikan (MSB) akan menjadi 1, sehingga menghasilkan nilai maksimum.
     */

}