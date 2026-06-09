#include <iostream>
using namespace std;

int tools;

int main() {
    cout << "=== Selamat Datang di Konversi Satuan ===" << endl;
    string listKonversi[] = {"km", "hm", "dam", "m", "dm", "cm", "mm"};
    int sizeListKonversi = sizeof(listKonversi) / sizeof(listKonversi[0]);
    for(int i= 0; i < sizeListKonversi; i++) {
        cout << i+1 << ". " << listKonversi[i] << endl;
    }
    cout << "Pilih konversi yang ada di list (e.g '1' ) : "; cin >> tools;cout << endl;

    switch (tools) {
    case 1:
        cout << "Mode Kilometer" << endl;
        break;
    
    default:
        break;
    }
}

void modeKilometer() {

}
