#include <iostream>
using namespace std;

float bitsABytes(float bits) {
    return bits / 8;
}

float kilobytesABytes(float kb) {
    return kb * 1024;
}

float megabytesAKilobytes(float mb) {
    return mb * 1024;
}

float gigabytesAMegabytes(float gb) {
    return gb * 1024;
}

int main() {
    int opcion;
    float valor;
    bool salir = false;

    while (!salir) {
        cout << "\n=== Conversiones Informaticas ===\n";
        cout << "1. Bits a Bytes\n";
        cout << "2. Kilobytes a Bytes\n";
        cout << "3. Megabytes a Kilobytes\n";
        cout << "4. Gigabytes a Megabytes\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese cantidad de bits: ";
                cin >> valor;
                cout << "Resultado: " << bitsABytes(valor) << " bytes\n";
                break;
            case 2:
                cout << "Ingrese cantidad de kilobytes: ";
                cin >> valor;
                cout << "Resultado: " << kilobytesABytes(valor) << " bytes\n";
                break;
            case 3:
                cout << "Ingrese cantidad de megabytes: ";
                cin >> valor;
                cout << "Resultado: " << megabytesAKilobytes(valor) << " kilobytes\n";
                break;
            case 4:
                cout << "Ingrese cantidad de gigabytes: ";
                cin >> valor;
                cout << "Resultado: " << gigabytesAMegabytes(valor) << " megabytes\n";
                break;
            case 5:
                salir = true;
                break;
            default:
                cout << "Opcion invalida.\n";
        }
    }

    return 0;
}
