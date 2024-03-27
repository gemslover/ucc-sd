#include <iostream>

using namespace std;

int main() {
    int opcion;
    double numeros[5], resultado;
    int cantidadNumeros = 0;
    char continuar;

    do {
        cout << "Seleccione una opción:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. División" << endl;
        cout << "Opción: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese hasta 5 números separados por espacios:" << endl;
            while (cantidadNumeros < 5 && cin >> numeros[cantidadNumeros]) {
                cantidadNumeros++;
            }

            switch(opcion) {
                case 1:
                    resultado = 0;
                    for (int i = 0; i < cantidadNumeros; i++) {
                        resultado += numeros[i];
                    }
                    cout << "Resultado de la suma: " << resultado << endl;
                    break;
                case 2:
                    if (cantidadNumeros >= 2) {
                        resultado = numeros[0];
                        for (int i = 1; i < cantidadNumeros; i++) {
                            resultado -= numeros[i];
                        }
                        cout << "Resultado de la resta: " << resultado << endl;
                    } else {
                        cout << "Error: debe ingresar al menos 2 números para restar." << endl;
                    }
                    break;
                case 3:
                    resultado = 1;
                    for (int i = 0; i < cantidadNumeros; i++) {
                        resultado *= numeros[i];
                    }
                    cout << "Resultado de la multiplicación: " << resultado << endl;
                    break;
                case 4:
                    if (cantidadNumeros >= 2 && numeros[cantidadNumeros - 1] != 0) {
                        resultado = numeros[0];
                        for (int i = 1; i < cantidadNumeros; i++) {
                            resultado /= numeros[i];
                        }
                        cout << "Resultado de la división: " << resultado << endl;
                    } else {
                        cout << "Error: debe ingresar al menos 2 números (el divisor no puede ser cero) para dividir." << endl;
                    }
                    break;
                default:
                    cout << "Opción inválida." << endl;
                    break;
            }
        } else {
            cout << "Opción inválida." << endl;
        }

        cout << "¿Desea realizar otra operación? (s/n): ";
        cin >> continuar;
        cantidadNumeros = 0; // Reiniciamos el contador de números para la siguiente operación
    } while (continuar == 's' || continuar == 'S');

    cout << "Programa finalizado." << endl;

    return 0;
}

