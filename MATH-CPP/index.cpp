#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;
int tools;


// utama
int main() {

    vector<string> menu = {
        "Daftar/login?",
        "Kalkulator",
        "Konversi Suhu",
        "Hitung Nilai Rata-rata",
        "Hitung Luas & Keliling Bangun Datar",
        "Hitung Luas Permukaan & Volume Bangun Ruang",
        "Credit/Version"
    };
    cout << "MATH CPP - by Novemas Heka" << endl;
    cout << "Menu : " << endl;
    for(int i = 0; i < menu.size(); i++ ){
        cout << i+1 << ". " << menu[i] << endl;
    }cout << "00. exit" << endl;


    do{
        cout << "Pilih apa yang kalian cari : ";cin >> tools; cout << endl;
        switch (tools) {
        case 1 :
            cout << "hello world";
            break;
        case 0:
            return 1;
            break;
        
        default:
            cout << "Pilihan yang anda cari tidak ada" << endl;
            break;
        }
    }while(tools > menu.size() || tools == 0 || tools < menu.size());

    return 1;
    
    
    

}

