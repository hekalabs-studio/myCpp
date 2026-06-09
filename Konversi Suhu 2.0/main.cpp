#include <iostream>
using namespace std;
float KONVERSION(float nilai, char var1, char opsi, char var2);

float value;
char suhu0, suhu1, konversi;

int main() {
    cout << "===== Selamat datang di Konversi Suhu =====" << endl;
    cout << "Masukan nilai yang ingin di Konversi (E.g 30C > F) : ";
    cin >> value >> suhu0;cin >> konversi >>suhu1 ;
    cout <<"Hasil " << value << suhu0 << " " << konversi << " " << suhu1 << " = "<< KONVERSION(value, suhu0, konversi, suhu1) << suhu1 << endl;

    return 0;
}


float KONVERSION(float nilai, char var1 , char opsi, char var2 ) {

    switch (var2)
    {
    case 'C':
    case 'c':
        
        switch (var1) {
            case 'r':
            case 'R':
                
                {
                    float rumusR = nilai * 5.0/4.0;
                    return rumusR;
                }
                    
                break;
            case 'f':
            case 'F':
                
                {
                    float rumusF = (nilai - 32) * 5.0/9.0;
                    return rumusF;
                }
                    
                break;
            case 'k':
            case 'K':
                
                {
                    float rumusK = (nilai - 273) * 5.0/5.0;
                    return rumusK;
                }
                    
                break;
            
            default:
                break;
            }
        break;
    case 'R':
    case 'r':
            switch (var1)
            {
            case 'c':
            case 'C':
            {
                float rumusCR = nilai * 4.0/5.0;
                return rumusCR;
            }
                
                break;
            
            case 'f':
            case 'F':
            {
                float rumusFR = (nilai - 32.0) * 4.0/9.0;
                return rumusFR;
            }
                
                break;

            case 'k':
            case 'K':
            {
                float rumusKR = (nilai - 273.0) * 4.0/5.0;
                return rumusKR;
            }
                
                break;
             
            default:
                break;
            }
        
        break;
    case 'F':
    case 'f':

            switch (var1)
            {
            case 'c':
            case 'C':
                {
                    float rumusCF = (nilai * 9.0/5.0) + 32.0;
                    return rumusCF;
                }
                
                break;
            case 'r':
            case 'R':
                {
                    float rumusRF = (nilai * 9.0/4.0) + 32.0 ;
                    return rumusRF;
                }
                
                break;
            case 'k':
            case 'K':
                {
                    float rumusKF = (nilai - 273.0) * 9.0/5.0 + 32.0;
                    return rumusKF;
                }
                
                break;
            
            
            default:
                break;
            }

        
        break;
    case 'K':
    case 'k':
            switch (var1)
            {
            case 'c':
            case 'C':
                {
                    float rumusCK = (nilai * 5.0/5.0) + 273;
                    return rumusCK;
                }
                break;
            
            case 'r':
            case 'R':
                {
                    float rumusCK = (nilai * 5.0/4.0) + 273;
                    return rumusCK;
                }
                break;

            case 'f':
            case 'F':
                {
                    float rumusFK = (nilai - 32.0) * 5.0/9.0 + 273.0;
                    return rumusFK;
                }
                break;
            
            default:

                break;
            }
        
        break;
    
    default:
        
        break;
    }

    return 0;
    
}