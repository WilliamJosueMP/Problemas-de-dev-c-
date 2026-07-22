#include <iostream>

using namespace std;
int main(){
    float a, b, c;
    cout << "Ingrese la cantidad de dinero del usuario a: ";
    cin >> a;
    cout << "Ingrese la cantidad de dinero del usuario b: ";
    cin >> b;
    cout << "Ingrese la cantidad de dinero del usuario c: ";
    cin >> c;
    float S = a+b+c;
    double Pa= (double)a*100/S;
    double Pb= (double)b*100/S;
    double Pc= (double)c*100/S;
    cout << "El porcentaje de dinero del usuario a es: " << Pa << "%" << endl;
    cout << "El porcentaje de dinero del usuario b es: " << Pb << "%" << endl;
    cout << "El porcentaje de dinero del usuario c es: " << Pc << "%" << endl;
    return 0;
}