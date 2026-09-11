#include <iostream>

using namespace std;

int main() {

    // ini perulangan for
    for (int i = 0; i <= 5; i++) {
        cout << "perulangan for ke : " << i << endl;
    }

    // while
    int i = 0;
    while (i <= 5)
    {
        cout << "perulangan while ke : " << i << endl;
        i++;
    }

    int f = 0;
    
    do
    {
        cout << "perulangan while do ke : " << f << endl;
        f++;
    } while (f <= 5);


    int data[5] = {1, 2, 3, 4, 5};

    cout << size(data) << endl;

    for(i = 0; i <= size(data) - 1; i++) {
        if (data[i] % 2 == 0)
        {
            cout << "angka : " << data[i] << " indeks ke : " << i << endl;
        }
    }

    // while

    int k = 0;
    while (k <= size (data) -1)
    {
        if (data[k] % 2 == 0 ){
            cout << "angka : " << data[k] << " indeks ke : " << k << endl;
        }
        k++;
    }

    
}