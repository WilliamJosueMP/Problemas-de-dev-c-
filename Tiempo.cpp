#include <iostream>
using namespace std;
int main(){
    int tiempo;
    int semanas, dias, horas, minutos, segundos;
    cout << "Ingrese el tiempo en segundos: ";
    cin >> tiempo;
    semanas = tiempo / (7 * 24 * 60 * 60);
    dias = (tiempo % (7 * 24 * 60 * 60)) / (24 * 60 * 60);
    horas = (tiempo % (24 * 60 * 60)) / (60 * 60);
    minutos = (tiempo % (60 * 60)) / 60;
    segundos = tiempo % 60;
    cout << "\n--- Resultado ---" << endl;
    cout << "Semanas : " << semanas << endl;
    cout << "Dias    : " << dias << endl;
    cout << "Horas   : " << horas << endl;
    cout << "Minutos : " << minutos << endl;
    cout << "Segundos: " << segundos << endl;

    return 0;
}