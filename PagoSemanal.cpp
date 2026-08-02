#include <iostream>
#include <string>
using namespace std;
int main(){
    string nombre;
    int ph, ht;
    int ps;
    cout<<"Ingresa el valor de ph: ";
    cin>>ph;
    cout<<"Ingresa el valor de ht: ";
    cin>>ht;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    ps = ph * ht;
    if (ht>40){
               ps = 2*ph * ht;
               cout<<"\nEl Pago de salario es: "<<ps<<endl;
               }
    else {
         ps = ph* ht;
         cout <<"\nElpago de salarios es: "<<ps<<endl;
         }
    return 0;
}