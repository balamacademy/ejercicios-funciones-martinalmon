#include <iostream>
using namespace std;

// Funciones de operaciones matemáticas
int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    if (b == 0) {
        cout << "⚠️ Error: No se puede dividir entre cero." << endl;
        return 0.0;
    }
    return (float)a / b;
}

// Función principal
int main() {
    int opcion;
    int num1, num2;
    bool salir = false;

    while (!salir) {
        // Menú
        cout << "\n=== Calculadora de Operaciones Matematicas ===\n";
        cout << "1. Sumar dos numeros\n";
        cout << "2. Restar dos numeros\n";
        cout << "3. Multiplicar dos numeros\n";
        cout << "4. Dividir dos numeros\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << "Resultado: " << sumar(num1, num2) << endl;
                break;
            case 2:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << "Resultado: " << restar(num1, num2) << endl;
                break;
            case 3:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << "Resultado: " << multiplicar(num1, num2) << endl;
                break;
            case 4:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                if (num2 == 0) {
                    cout << "⚠️ Error: No se puede dividir entre cero." << endl;
                } else {
                    cout << "Resultado: " << dividir(num1, num2) << endl;
                }
                break;
            case 5:
                salir = true;
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "❌ Opcion invalida. Intente de nuevo." << endl;
        }
    }

    return 0;
}
