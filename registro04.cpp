#include <iostream>
#include <string>
using namespace std;

int main() {

    struct Nacimiento {
        string mes;
        string dia;
        string año;
    };

    struct Persona {
        string nombre;
        Nacimiento nacimiento;
    };

    int n;
    Persona persona[100];

    cout << "Ingrese la cantidad de personas: ";
    cin >> n;
    cin.ignore();

    // Registrar personas
    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, persona[i].nombre);

        cout << "Mes de Nacimiento: ";
        getline(cin, persona[i].nacimiento.mes);

        cout << "Dia de Nacimiento: ";
        getline(cin, persona[i].nacimiento.dia);

        cout << "Año de Nacimiento: ";
        getline(cin, persona[i].nacimiento.año);
    }

    // Mostrar todas las personas
    cout << "\n--REGISTRO DE FECHA DE NACIMIENTO--\n";

    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << endl;
        cout << "Nombre: " << persona[i].nombre << endl;
        cout << "Mes: " << persona[i].nacimiento.mes << endl;
        cout << "Dia: " << persona[i].nacimiento.dia << endl;
        cout << "Año: " << persona[i].nacimiento.año << endl;
        cout << "Fecha de Nacimiento: "
             << persona[i].nacimiento.dia << "/"
             << persona[i].nacimiento.mes << "/"
             << persona[i].nacimiento.año << endl;
    }

    // Buscar por mes
    string mes;
    cout << "\nIngrese el mes a buscar: ";
    getline(cin, mes);

    bool encontrado = false;

    for (int i = 0; i < n; i++) {

        if (mes == persona[i].nacimiento.mes) {

            cout << "\nNombre: " << persona[i].nombre << endl;
            cout << "Su cumpleaños es: "
                 << persona[i].nacimiento.dia << "/"
                 << persona[i].nacimiento.mes << "/"
                 << persona[i].nacimiento.año << endl;

            encontrado = true;
        }
    }

    if (encontrado == false) {
        cout << "\nNo hay personas que hayan nacido en ese mes." << endl;
    }

    return 0;
}