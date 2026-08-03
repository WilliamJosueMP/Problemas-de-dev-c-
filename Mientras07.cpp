#include <iostream>
using namespace std;
int main(){
    float pagos[100]; 
    float sumaTotal = 0;
    char respuesta;
    bool continuar = true; 
    int i = 0; 
    while (continuar) {
        cout << "Ingrese el pago " << (i + 1) << ": ";
        cin >> pagos[i]; 
        sumaTotal = sumaTotal + pagos[i];
        i = i + 1;
        cout << "¿Desea ingresar otro pago? (s/n): ";
        cin >> respuesta;
        if (respuesta == 'n' || respuesta == 'N') {
            continuar = false;
        }
    }
    cout << "\n--- HISTORIAL DE PAGOS REGISTRADOS ---" << endl;
    for (int j = 0; j < i; j++) {
        cout << "Pago " << (j + 1) << ": S/ " << pagos[j] << endl;
    }
    cout << "La suma total de los pagos es: S/ " << sumaTotal << endl;

    return 0;
}