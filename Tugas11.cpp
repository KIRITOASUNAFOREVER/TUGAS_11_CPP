#include <iostream>
using namespace std;

int luasSegitiga(int alas, int tinggi){
    int hasil;
    hasil = (alas * tinggi) / 2;
    return hasil;
}

int main(){
    int a, b;
    cout << "Inputkan Alas Segitiga : ";
    cin >> a;getchar();
    cout << "Inputkan Tinggi Segitiga : ";
    cin >> b;getchar();
    cout << "Luas Segitiga Adalah : " << luasSegitiga(a,b) << endl;
    return 0;
}
