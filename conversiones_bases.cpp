#include <iostream>
using namespace std;

void decimalABinario(int n) {
    if (n > 1) decimalABinario(n / 2);
    cout << n % 2;
}

void decimalAOctal(int n) {
    if (n >= 8) decimalAOctal(n / 8);
    cout << n % 8;
}

void decimalAHexadecimal(int n) {
    if (n >= 16) decimalAHexadecimal(n / 16);
    int digito = n % 16;
    if (digito < 10)
        cout << digito;
    else
        cout << (char)(digito - 10 + 'A');
}

int main() {
    int opcion, numero;
    bool salir = false;

    while (!salir) {
        cout << "\n=== Conversiones de Bases ===\n";
        cout << "1. Decimal a Binario\n";
        cout << "2. Decimal a Octal\n";
        cout << "3. Decimal a Hexadecimal\n";
        cout << "4. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese un numero decimal: ";
                cin >> numero;
                cout << "Binario: ";
                decimalABinario(numero);
                cout << endl;
                break;
            case 2:
                cout << "Ingrese un numero decimal: ";
                cin >> numero;
                cout << "Octal: ";
                decimalAOctal(numero);
                cout << endl;
                break;
            case 3:
                cout << "Ingrese un numero decimal: ";
                cin >> numero;
                cout << "Hexadecimal: ";
                decimalAHexadecimal(numero);
                cout << endl;
                break;
            case 4:
                salir = true;
                break;
            default:
                cout << "Opcion invalida.\n";
        }
    }

    return 0;
}
