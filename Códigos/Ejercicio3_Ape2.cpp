#include <iostream>
#include <string>
using namespace std;

class Jean {
private:
    string codigo;
    string color;
    string talla;
    bool fue_tenido;
    int cant_tenidos;
    float precio;
    int cant_botones;
    float humedad;
    string estado_tela;

public:
    Jean(string _codigo, string _color, string _talla, bool _fue_tenido,
         int _cant_tenidos, float _precio, int _cant_botones, float _humedad, string _estado_tela) {
        codigo = _codigo;
        color = _color;
        talla = _talla;
        fue_tenido = _fue_tenido;
        cant_tenidos = _cant_tenidos;
        precio = _precio;
        cant_botones = _cant_botones;
        humedad = _humedad;
        estado_tela = _estado_tela;
    }

    void MostrarDatos() {
        cout << "============================" << endl;
        cout << "--- Informacion del Jean ---" << endl;
        cout << "============================" << endl;
        cout << "Codigo: " << codigo << endl;
        cout << "Color: " << color << endl;
        cout << "Talla: " << talla << endl;
        cout << "Fue tenido: " << (fue_tenido ? "Si" : "No") << endl;
        cout << "Cantidad de tenidos: " << cant_tenidos << endl;
        cout << "Precio: $" << precio << endl;
        cout << "Cantidad de botones: " << cant_botones << endl;
        cout << "Humedad: " << humedad << "%" << endl;
        cout << "Estado de la tela: " << estado_tela << endl;
    }

    void Lavar() {
        if (cant_tenidos > 0) {
            cant_tenidos--;
            cout << "======================================================" << endl;
            cout << "--> El jean ha sido lavado. Tenidos restantes: " << cant_tenidos << endl;
        } else {
            cout << "=====================================================" << endl;
            cout << "--> El jean ya no tiene tenidos que puedan disminuir." << endl;
        }
    }

    void Secar() {
        if (humedad > 0) {
            humedad -= 15.0;
            if (humedad < 0) {
                humedad = 0;
            }
            cout << "==========================================================" << endl;
            cout << "--> El jean ha sido secado. Humedad actual: " << humedad << "%" << endl;
        } else {
            cout << "==========================================================" << endl;
            cout << "--> El jean ya esta completamente seco (0% humedad)." << endl;
        }
    }
};

int main() {
    string codigo, color, talla, estado_tela;
    char respuesta_tenido;
    bool fue_tenido;
    int cant_tenidos, cant_botones, opcion;
    float precio, humedad;

    cout << "=================================" << endl;
    cout << "--- Registro Inicial del Jean ---" << endl;
    cout << "Ingrese el codigo: "; cin >> codigo;
    cout << "Ingrese el color: "; cin >> color;
    cout << "Ingrese la talla: "; cin >> talla;
    cout << "Fue tenido? (S/N): "; cin >> respuesta_tenido;
    if (respuesta_tenido == 'S' || respuesta_tenido == 's') {
        fue_tenido = true;
    } else {
        fue_tenido = false;
    }

    cout << "Ingrese la cantidad de tenidos: "; cin >> cant_tenidos;
    cout << "Ingrese el precio: "; cin >> precio;
    cout << "Ingrese la cantidad de botones: "; cin >> cant_botones;
    cout << "Ingrese el porcentaje de humedad (ej. 50): "; cin >> humedad;
    cout << "Ingrese el estado de la tela: "; cin >> estado_tela;

    Jean miJean(codigo, color, talla, fue_tenido, cant_tenidos, precio, cant_botones, humedad, estado_tela);

    do {
        cout << "========================" << endl;
        cout << "--- Menu de Opciones ---" << endl;
        cout << "1. Mostrar datos del jean" << endl;
        cout << "2. Lavar jean (disminuye tenidos)" << endl;
        cout << "3. Secar jean (disminuye humedad)" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                miJean.MostrarDatos();
                break;
            case 2:
                miJean.Lavar();
                break;
            case 3:
                miJean.Secar();
                break;
            case 4:
                cout << "========================" << endl;
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "=====================================" << endl;
                cout << "Opcion no valida. Intente nuevamente." << endl;
        }
    } while (opcion != 4);

    return 0;
}
