#include <iostream>
using namespace std;

void modeCelcius();
void modeReamur();
void modeFarenheit();
void modeKelvin();

int tools;
char menu;

int main() {
    
    cout << "===== SELAMAT DATANG DI KONVERSI SUHU =====" << endl;
    string toolsKonversi[] = {"Celcius", "Reamur", "Farenheit", "Kelvin"};
    int listKonversi = sizeof(toolsKonversi) / sizeof(toolsKonversi[0]);
    for(int i = 0; i < listKonversi; i++) {
        cout << i+1 << ". " <<  toolsKonversi[i] << endl;
    }

    //Rumus Konversi
    cout << "Pilih dari salah satu konversi suhu di atas : "; cin >> tools ; cout << endl;
    switch (tools){
    case 1: // CELCIUS
        cout << "Mode : " << toolsKonversi[0] << endl;
        modeCelcius();
        break;
    case 2: // REAMUR
        cout << "Mode : " << toolsKonversi[1] << endl;
        modeReamur();
        break;
    case 3: // FARENHEIT
        cout << "Mode : " << toolsKonversi[2] << endl;
        modeFarenheit();
        break;
    case 4: // KELVIN
        cout << "Mode : " << toolsKonversi[3] << endl;
        modeKelvin();
        break;

    default:
        cout << "Nilai yang kamu masukan tidak ada pada daftar LIST!" << endl;
        break;
    }
}

void modeCelcius() {
    string mCelcius[] = {"a. Celcius > Reamur", "b. Celcius > Farenheit", "c. Celcius > Kelvin"};
    int listCel = sizeof(mCelcius) / sizeof(mCelcius[0]);
    for (int i = 0; i < listCel; i++) {
        cout << mCelcius[i] << endl;
    }
    cout << endl;
    cout << "Pilih Mode Converter Celcius : ";cin >> menu; cout << endl;

    switch (menu) {
    case 'a':

        break;
    case 'b':

        break;
    case 'c':

        break;

    default:
    cout << "Pilihan tidak ada di List!!" << endl;
        break;
    }

}
void modeReamur() {
    string mReamur[] = {"a. Reamur > Celcius", "b. Reamur > Farenheit", "c. Reamur > Kelvin"};
    int listCel = sizeof(mReamur) / sizeof(mReamur[0]);
    for (int i = 0; i < listCel; i++) {
        cout << mReamur[i] << endl;
    }
    cout << endl;
    cout << "Pilih Mode Converter Reamur : ";cin >> menu;cout << endl;
    
    

    switch (menu) {
    case 'a':

        break;
    case 'b':

        break;
    case 'c':

        break;

    default:
        cout << "Pilihan tidak ada di List!!" << endl;
        break;
    }
}
void modeFarenheit() {
    string mFarenheit[] = {"a. Farenheit > Celcius", "b. Farenheit > Reamur", "c. Farenheit > Kelvin"};
    int listCel = sizeof(mFarenheit) / sizeof(mFarenheit[0]);
    for(int i = 0; i < listCel; i++) {
        cout << mFarenheit[i] << endl;
    }
    cout << endl;
    cout << "Pilih Mode Converter Farenheit : ";cin >> menu;cout << endl;
    switch (menu)
    {
    case 'a':

        break;
    case 'b':

        break;
    case 'c':

        break;

    default:
        cout << "Pilihan tidak ada di List!!" << endl;
        break;
    }
}
void modeKelvin() {
    string mKelvin[] = {"a. Kelvin > Celcius", "b. Kelvin > Reamur", "c. Kelvin > Farenheit"};
    int listCel = sizeof(mKelvin) / sizeof(mKelvin[0]);
    for (int i = 0; i < listCel; i++)
    {
        cout << mKelvin[i] << endl;
    }
    cout << "Pilih Mode Converter Kelvin ";
    cin >> menu;
    cout << endl;

    switch (menu) {
    case 'a':

        break;
    case 'b':

        break;
    case 'c':

        break;

    default:
        cout << "Pilihan tidak ada di List!!" << endl;
        break;
    }
}