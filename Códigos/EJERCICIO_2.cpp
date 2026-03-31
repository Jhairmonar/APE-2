#include <iostream>
#include <string>

using namespace std;

struct Cuenta {
    int id;
    double saldo;
};

int main() {
    string dni;
    Cuenta cuentas[3];
    int opcion, numC, destC;
    double monto;

    cout << "--- Registro de Cliente ---" << endl;
    cout << "Ingrese DNI: ";
    cin >> dni;

    // Inicialización de cuentas
    for(int i = 0; i < 3; i++) {
        cuentas[i].id = i + 1;
        cuentas[i].saldo = 500.0; // Saldo inicial de cortesía
    }

    do {
        cout << "\n--- MENU BANCARIO (DNI: " << dni << ") ---" << endl;
        cout << "1. Ver atributos de cuenta" << endl;
        cout << "2. Enviar dinero (Retirar)" << endl;
        cout << "3. Recibir dinero (Depositar)" << endl;
        cout << "4. Transferencia entre cuentas" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 3) {
            cout << "Seleccione cuenta (1, 2 o 3): ";
            cin >> numC;
            if(numC < 1 || numC > 3) { cout << "Cuenta invalida."; continue; }
        }

        switch(opcion) {
            case 1:
                cout << "ID Cuenta: " << cuentas[numC-1].id << endl;
                cout << "Saldo Actual: $" << cuentas[numC-1].saldo << endl;
                break;
            case 2:
                cout << "Monto a enviar: ";
                cin >> monto;
                if(monto <= cuentas[numC-1].saldo) {
                    cuentas[numC-1].saldo -= monto;
                    cout << "Operacion exitosa." << endl;
                } else {
                    cout << "Error: Fondos insuficientes." << endl;
                }
                break;
            case 3:
                cout << "Monto a recibir: ";
                cin >> monto;
                cuentas[numC-1].saldo += monto;
                cout << "Saldo actualizado." << endl;
                break;
            case 4:
                cout << "Cuenta origen (1-3): "; cin >> numC;
                cout << "Cuenta destino (1-3): "; cin >> destC;
                cout << "Monto a transferir: "; cin >> monto;
                if(cuentas[numC-1].saldo >= monto) {
                    cuentas[numC-1].saldo -= monto;
                    cuentas[destC-1].saldo += monto;
                    cout << "Transferencia completada." << endl;
                } else {
                    cout << "Saldo insuficiente en cuenta origen." << endl;
                }
                break;
        }
    } while(opcion != 5);

    return 0;
}
