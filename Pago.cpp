#include <iostream>
using namespace std;
int main(){
    int Pvp, Pf;
    int Descuento;
    cout<<"Ingrese el valor de Pvp: ";
    cin>>Pvp;
    cout<<"Ingrese el valor de Pf: "; 
    cin>>Pf;
    Descuento = (Pvp - Pf) * 100 / Pvp;
    cout<<"\n------El porcentaje en descuento es:------ "<<Descuento<<"%"<<endl;
    return 0;
}