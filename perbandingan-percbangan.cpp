#include <iostream>

using namespace std;

int main(){
    int a = 2;
    int b = 2;

    bool sama_dengan = a == b;
    bool tidak_sama_dengan = a != b;
    bool lebih_besar_dari = a > b;
    bool lebih_kecil_dari = a < b;
    bool lebih_besar_sama_dengan = a >= b;
    bool lebih_kecil_sama_dengan = a <= b;

    cout << sama_dengan << endl;
    cout << tidak_sama_dengan << endl;
    cout << lebih_besar_dari << endl;
    cout << lebih_kecil_dari << endl;
    cout << lebih_besar_sama_dengan << endl;
    cout << lebih_kecil_sama_dengan << endl;

    // if (false)
    // {
    //     cout << "Pak Priyo" << endl;
    // }else{
    //     cout << "Pak Sigit" << endl;
    // }

    if (false)
    {
        cout << "Pak Sigit" << endl;
    }
    else if (true)
    {
        cout << "Retta" << endl;
    }
    else
    {
        cout << "Pak Priyo" << endl;
    }

    if(a >= 3)
    {
        cout << "Pak Sigit" << endl;
    }
    else if (a >= 2)
    {
        cout << "Retta" << endl;
    }
    else 
    {
        cout << "Pak Priyo" << endl;
    }

    switch (a)
    {
    case 1:
        cout << "Pak Sigit" << endl;
        break;
    case 2:
        cout << "Pak Priyo" << endl;
        break;  
    
    default:
        cout << "Retta" << endl;
        break;
    }

    int c = 55;
    int d = 45;
    
    if ( c >= d ){
      if (c == d){
        cout << "Kelinci" << endl; 
      }else{
        cout << "Ulat" << endl;
      }        
    } else if (c > 35 ){
        cout << "Kura-Kura" << endl;
    } else{
        cout << "Anjing" << endl;
    }

    int arr[5] = {1, 3, 4, 5, 6};

    std::cout << arr[0] << endl;
}