#include <iostream>
#include <string>
using namespace std;

int main() {
    int h, m, s;
    string respuesta;

    do {
        cout << "\n--- CONFIGURACION DE RELOJ ---" << endl;

        // 1. Validación de horas
        do {
            cout << "Ingrese hora (0-23): ";
            cin >> h;
            if (h < 0 || h > 23) {
                cout << "  -> Error: La hora es invalida. Intente de nuevo.\n";
            }
        } while (h < 0 || h > 23);

        // 2. Validación de minutos
        do {
            cout << "Ingrese minutos (0-59): ";
            cin >> m;
            if (m < 0 || m > 59) {
                cout << "  -> Error: Los minutos son invalidos. Intente de nuevo.\n";
            }
        } while (m < 0 || m > 59);

        // 3. Validación de segundos
        do {
            cout << "Ingrese segundos (0-59): ";
            cin >> s;
            if (s < 0 || s > 59) {
                cout << "  -> Error: Los segundos son invalidos. Intente de nuevo.\n";
            }
        } while (s < 0 || s > 59);

        // Mostrar resultado validado
        cout << "\n>> Hora registrada: " << h << ":" << m << ":" << s << " <<" << endl;

        // Preguntar si desea repetir el proceso principal
        cout << "\n¿Desea cambiar la hora? (si/no): ";
        cin >> respuesta;

    } while (respuesta == "si" || respuesta == "Si");

    cout << "\nPrograma finalizado." << endl;
    return 0;
}
