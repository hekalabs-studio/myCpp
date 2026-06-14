#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <thread>
#include <chrono>

void headers();

void daftarLogin();
double kalkulator();

using namespace std::chrono;
using namespace std::this_thread;
using namespace std;
char tools;


// utama
int main() {
    vector<string> menu = {
        "Daftar/login?",
        "Kalkulator",
        "Konversi Suhu",
        "Hitung Nilai Rata-rata",
        "Hitung Luas & Keliling Bangun Datar",
        "Hitung Luas Permukaan & Volume Bangun Ruang",
        "Credit/Version",
        "Exit"
    };

    headers();
        

    do{
        cout << "Menu : " << endl;
        for(int i = 0; i < menu.size(); i++ ){
            cout << i+1 << ". " << menu[i] << endl;
            sleep_for(milliseconds(10));
        }

        cout << "Pilih apa yang kalian cari : ";cin >> tools; cout << endl;
        switch (tools) {
        case '1' :
            daftarLogin();
            break;
        case '2' :
            kalkulator();
            break;
        case '3' :
            
            break;
        case '4' :
            break;
        case '5' :
            break;
        case '6' :
            break;
        case '7' :
            break;
        case '8' :
            break;
        default:
            tools = '?';
            cout << "= = = Pilihan yang anda cari tidak ada = = =" << endl << endl;
            sleep_for(seconds(2));
            break;
        }
        
    } while(tools == '?');
}

void headers() {
    vector<string> header = {
        "= = = = = = = = = = = = = = = = ",
        "= MATH CPP - by Novemas Heka  =",
        "= = = = = = = = = = = = = = = = ",
    };

    for(int i = 0; i < header[0].length(); i++) {
            
            cout << header[0][i] << flush;
            sleep_for(milliseconds(20));
        }
        cout << endl;
        for(int i = 0; i < header[1].length();i++) {
            cout << header[1][i] << flush;
            sleep_for(milliseconds(20));
        }
        cout << endl;
        for(int i = 0; i < header[2].length();i++) {
            cout << header[2][i] << flush;
            sleep_for(milliseconds(20));
        }
        cout << endl << endl;
}

void daftarLogin() {
    cout << "Selamat bergabung dengan kami!" <<endl;
    string menu[] = {"1. Log in", "2. Sign in"};
    int listMenu = sizeof(menu) / sizeof(menu[0]);
    for(int i = 0; i < listMenu; i++) {
        cout << menu[i] << endl;
    }

}

double kalkulator() {
    vector<string> menu = {
        "= = = = = = = = = = = = = = = = = = = = = = = =",
        "=               MODE KALKULATOR               =",
        "= = = = = = = = = = = = = = = = = = = = = = = ="
    };
    for(int i = 0; i < menu.size(); i++) {
        cout << menu[i]<<endl;
    }
    return 0;

}

