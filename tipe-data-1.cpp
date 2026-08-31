#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double c = 0.1 + 0.2;
    double d = 0.3;
    double epsilon = 1e-9;
    cout << c << endl;
    cout << d << endl;
    cout << epsilon << endl;
    cout << abs(c-d) << endl;
}