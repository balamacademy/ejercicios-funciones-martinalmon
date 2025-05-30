#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) return false;
    return true;
}

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) resultado *= i;
    return resultado;
}

int contarDigitos(int n) {
    if (n == 0) return 1;
    int contador = 0;
    while (n != 0) {
        contador++;
        n /= 10;
    }
    return contador;
}

int sumarDigitos(int n) {
    int suma = 0;
    if (n < 0) n = -n;
    while (n != 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    int opcion, numero;
    bool salir = false;

    while (!salir) {
        cout << "\n=== Utilidades Numericas ===\n";
        cout << "1. Verificar si un numero es primo\n";
        cout << "2. Calcular el factorial de un numero\n";
        cout << "3. Contar digitos de un numero\n";
        cout << "4. Sumar los digitos de un numero\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << (esPrimo(numero) ? "Es primo\n" : "No es primo\n");
                break;
            case 2:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Factorial: " << factorial(numero) << endl;
                break;
            case 3:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Cantidad de digitos: " << contarDigitos(numero) << endl;
                break;
            case 4:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Suma de los digitos: " << sumarDigitos(numero) << endl;
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
