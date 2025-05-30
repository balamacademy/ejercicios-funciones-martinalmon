#include <iostream>
using namespace std;

// Funciones de conversión
float celsiusAFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32;
}

float fahrenheitACelsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}

float metrosAPies(float m) {
    return m * 3.28084;
}

float kilogramosALibras(float kg) {
    return kg * 2.20462;
}

// Función principal
int main() {
    int opcion;
    float valor;
    bool salir = false;

    while (!salir) {
        // Menú
        cout << "\n=== Calculadora de Conversiones Fisicas ===\n";
        cout << "1. Celsius a Fahrenheit\n";
        cout << "2. Fahrenheit a Celsius\n";
        cout << "3. Metros a Pies\n";
        cout << "4. Kilogramos a Libras\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese los grados Celsius: ";
                cin >> valor;
                cout << "Resultado: " << celsiusAFahrenheit(valor) << " °F\n";
                break;
            case 2:
                cout << "Ingrese los grados Fahrenheit: ";
                cin >> valor;
                cout << "Resultado: " << fahrenheitACelsius(valor) << " °C\n";
                break;
            case 3:
                cout << "Ingrese la cantidad en metros: ";
                cin >> valor;
                cout << "Resultado: " << metrosAPies(valor) << " pies\n";
                break;
            case 4:
                cout << "Ingrese la cantidad en kilogramos: ";
                cin >> valor;
                cout << "Resultado: " << kilogramosALibras(valor) << " libras\n";
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
