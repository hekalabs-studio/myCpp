#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string formatRibuan(long long result) {
    string ribuan = to_string(result);
    int n = ribuan.length() -3;
    while (n > 0) 
    { 
        ribuan.insert(n, ".");
        n -= 3;
    }
    return ribuan;
}

int main() {
    double angka1, angka2;
    char operate, mulai_ulang;

    cout << endl;
    cout << "==========================================" << endl;
    cout << "  SELAMAT DATANG DI KALKULATOR SEDERHANA  " << endl;
    cout << "==========================================" << endl;
    cout << endl;

    cout << "Masukan Nilai (E.g ,5 + 3) : ";
    cin >> angka1 >> operate >> angka2;

    do {
        switch (operate) {
        case '+':
            cout << "Hasil dari " << angka1 << " " << operate << " " << angka2 << " adalah : ";
            cout << formatRibuan((long long) angka1 + angka2)  << endl;
            break;
        case '-':
            cout << "Hasil dari " << angka1 << " " << operate << " " << angka2 << " adalah : ";
            cout << formatRibuan((long long ) angka1 - angka2) << endl;
            break;
        case '/':
            cout << "Hasil dari " << angka1 << " " << operate << " " << angka2 << " adalah : ";
            cout << formatRibuan((long long) angka1 / angka2) << endl;
            break;
        case '%':
            cout << "Hasil dari " << angka1 << " " << operate << " " << angka2 << " adalah : ";
            cout << formatRibuan((long long) int(angka1) % int(angka2)) << endl;
            break;
        case '*':
            cout << "Hasil dari " << angka1 << " " << operate << " " << angka2 << " adalah : ";
            cout << formatRibuan((long long) angka1 * angka2) << endl;
            break;
        case '^':
            cout << "Hasil dari " << angka1 << " " << operate << " " << angka2 << " adalah : ";
            cout << formatRibuan((long long) pow(angka1, angka2)) << endl;
            break;
        
        default:
        cout << "Operator yang kamu masukan SALAH" << endl;
            break;
        }

        cout << "Ketik Y/n untuk melanjutkan atau tidak : ";
        cin >> mulai_ulang;

        if (mulai_ulang == 'Y' || mulai_ulang == 'y') {
            cout << "Masukan Nilai (E.g ,5 + 3) : ";
            cin >> angka1 >> operate >> angka2;
        }
        cout << endl;

    } while (mulai_ulang == 'Y' || mulai_ulang == 'y');
    return 0;
}