#include <iostream>

using namespace std;

int main(){
    float a = 0.1f + 0.2f;
    if (a == 0.3f) {
        printf("a sama dengan 0.3f\n");
    } else {
        printf("a tidak sama dengan 0.3f\n");
    }
    double b = 0.1f + 0.2f;
    if (b == 0.3f) {
        cout << "b sama dengan 0.3f" << endl;
    } else {
        cout << "b tidak sama dengan 0.3f" << endl;
    }

    double c = 0.1 + 0.2;
    double d = 0.3;
    if (c == d) {
        cout << "c sama dengan 0.3" << endl;
    } else {
        cout << "c tidak sama dengan 0.3" << endl;
    }

    // komentar 1
    /** komentar 2 */

    /** 
     * hasil pada nilai a = 0.3 dan b != 0.3 
     * karena nilai b memakai tipe data double yang dimana presisi nya lebih panjang dan != 0.3 float
     **/

}