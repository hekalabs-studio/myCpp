#include <iostream>
#include <cmath>
#include <string>
#include <stdexcept>

/*

//ceil(4.2);     // 5   (dibulatkan ke atas)
floor(4.9);    // 4   (dibulatkan ke bawah)
round(4.5);    // 5   (pembulatan normal)

sqrt(16);      // 4   (akar kuadrat)
pow(2, 3);     // 8   (2 pangkat 3)
cbrt(27);      // 3   (akar pangkat tiga)

abs(-10);      // 10  (nilai absolut int)
fabs(-3.14);   // 3.14(nilai absolut double)

sin(M_PI/2);   // 1   (sinus 90° / π/2 rad)
cos(0);        // 1   (cosinus 0°)
tan(M_PI/4);   // 1   (tangen 45°)

log(10);       // 2.3026 (ln 10)
log10(100);    // 2      (log basis 10)
exp(1);        // 2.7183 (e pangkat 1)

fmin(3.5, 7.2);// 3.5  (nilai terkecil)
fmax(3.5, 7.2);// 7.2  (nilai terbesar)

// ===== TYPE DATA INTEGER =====
int a = 10;        // 10   (bilangan bulat)
short b = 100;     // 100  (integer kecil)
long c = 1000000;  // 1000000 (integer besar)
long long d = 1e12;// 1000000000000 (integer sangat besar)

// ===== TYPE DATA DESIMAL =====
float x = 3.14f;   // 3.14  (desimal presisi rendah)
double y = 3.14159;// 3.14159 (desimal presisi tinggi)

// ===== TYPE DATA KARAKTER =====
char ch = 'A';     // A    (1 karakter)
char num = '7';    // '7'  (bukan angka, tapi karakter)

// ===== TYPE DATA BOOLEAN =====
bool p = true;     // 1    (benar)
bool q = false;    // 0    (salah)

// ===== TYPE DATA STRING =====
string s = "Heka"; // Heka (teks)

// ===== TYPE DATA ARRAY =====
int arr[3] = {1,2,3}; // {1,2,3} (kumpulan data)

// ===== TYPE DATA CONSTANT =====
const int PI = 3;  // 3    (nilai tetap)

// ===== TYPE DATA POINTER =====
int n = 5;
int* ptr = &n;     // alamat n (pointer)

// ===== TYPE DATA AUTO =====
auto k = 10;       // int (tipe otomatis)

// ===== TYPE DATA VOID =====
void func();       // tidak mengembalikan nilai

*/

using namespace std;

string formatRibuan(long long result){
    string format = to_string(result);
    int n = format.length() -3;
    while(n > 0) {
        format.insert(n, "."); //pos (index), angka
        n -=3;
    }
    return format;

}

// kalkulator
void fungsiKalkulator() {
    double angka1, angka2;
    char operasi, ulang;

    cout << "======================================="<<endl;
    cout << "          KALKULATOR SEDERHANA     " <<endl;
    cout << "=======================================" << endl;

    

    //fungsi Kalkulator
    do {
        cout << "Masukan Operasi Bilangan (E.g 5 + 6) : ";
        cin >> angka1 >> operasi >> angka2;
            switch(operasi) {
            case '+':
                cout << "Hasil dari " << angka1 << " " << operasi << " " << angka2 << " adalah : " ;
                cout << formatRibuan((long long) angka1 + angka2) << endl;
                break;
            case '/':
                cout << "Hasil dari " << angka1 << " " << operasi << " " << angka2 << " adalah : " ;
                cout <<  int(angka1) / angka2 << endl;
                break;
            case '^':
                cout << "Hasil dari " << angka1 << " " << operasi << " " << angka2 << " adalah : " ;
                cout << formatRibuan((long long) pow(angka1, angka2)) << endl;
                break;
            case '-': 
                cout << "Hasil dari " << angka1 << " " << operasi << " " << angka2 << " adalah : " ;
                cout << formatRibuan((long long) angka1 - angka2) << endl;
                break;
            case '*':
                cout << "Hasil dari " << angka1 << " " << operasi << " " << angka2 << " adalah : " ;
                cout << formatRibuan((long long) angka1 * angka2) << endl ;
                break;

            default: 
                cout << endl;
                cout << "Sistem Operasi salah!";
                cout << endl; 
                break;
            }
            
            cout << "Ketik Y untuk menetap di Kalkulator : ";
            cin >> ulang;
            cout << endl;
            } while(ulang == 'y' || ulang == 'Y');

}

//Rumus Keliling dan Luas Bola
void luasKelilingBola() {
    char inputMenu;
    double Idiameter, Ijari;
    const double PI = 3.141592653589793;

    cout << "Menghitung Rumus Keliling dan Luas Bola"<< endl;
    cout <<"Masukan Nilai yang hanya diketahui (beri nilai '0' untuk yang tidak diketahui)\n"<< endl;

    cout << "(dengan satuan 'CM') \n" << endl;

    do {
        cout << "Diameter Input : ";cin >> Idiameter;
        cout << "Jari-jari Input : ";cin >> Ijari;    
    if(Idiameter == 0 && Ijari > 0) {
        int Odiameter = Ijari *2;
        double resultVolume = 4.0/3.0 * PI * pow(Ijari, 3);
        double resultLuas = 4 * PI * pow(Ijari,2);
        
        cout << "Volume Bola Adalah " <<  resultVolume << " cm^3" << endl;
        cout << "Luas Permukaan Bola Adalah " <<  resultLuas << " cm^2" << endl;
    } else if (Ijari == 0 && Idiameter > 0) {
        double Ojari = Idiameter /2.0 ;
        double resultVolume = 4.0/3.0 * PI * pow(Ojari, 3);
        double resultLuas = 4 * PI * pow(Ojari,2);

        cout << "Volume Bola Adalah " <<  resultVolume << " cm^3" << endl;
        cout << "Luas Permukaan Bola Adalah " <<  resultLuas << " cm^2" << endl;
    } else{
        cout << "Jangan memberi nilai pada keduanya!" << endl;
    }


    } while (inputMenu == 'y' || inputMenu == 'Y');
    
    

}

// List MENU Program
void menu() {
    string list[] = {"kalkulator", "Luas dan Keliling Bola", "Luas dan Keliling Lingkaran", "Pythagoras"};
    int sizeList = sizeof(list) / sizeof(list[0]);

    cout << endl;
    cout << "Selamat Datang di 'MATEMATIKA DASAR C++' (by Novemas Heka)" << endl;
    for(int i = 0; i < sizeList; i++) {
        cout << i + 1 << "." << " "<< list[i] << endl;
    }
    cout << "\nKetik '404' untuk mengakhiri sesi : ";
}

// main utama
int main() {
    char inputUser, inputMenu;
    do {
    
        cout <<endl;
        menu();
        cout << endl;
        cout << "Pilih program dengan menuliskan URUTANNYA : ";
        cin >> inputUser;
        cout << endl;

        switch (inputUser) {

            case '1':
                fungsiKalkulator();
                break;
            case '2': 
                do {
                    luasKelilingBola();
                    cout << "Ketik Y untuk menetap di LuasKelilingBola : ";
                    cin >> inputMenu;
                    cout << endl;

                } while (inputMenu == 'Y' || inputMenu == 'y');
                break;

            case 'X' || 'x':
                cout << "Terima kasih Telah Menggukan Program saya ^_^";
                cout << endl;
                return 1;
                break;

            default:
                cout << "Input " << '"'<< inputUser <<'"'<<  "Tidak ada di list"<<endl;
                break;
            }  

            cout << endl;
            cout << "*******************************************    "<<endl;
            cout << "Ketik 'Y' : Kembali ke MENU" << endl;
            cout << "Ketik 'N' : Untuk mengakhiri sesi" << endl;
            cout << "      Y/N : "; cin >> inputMenu;
            cout << endl;

        } while (inputMenu == 'Y' || inputMenu == 'y');

    
   return 0;//Akhir int main;  
}