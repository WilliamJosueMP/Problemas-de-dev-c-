#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingrese el numero de meses: ";
    cin>>n;
    float deposito;
    float acumulado;
    acumulado = 0;
    for(int i=0; i<n; i++){
            cout<<"\nMes " << (i + 1) << " - El Monto depositado es: ";
            cin>>deposito;
            acumulado = deposito+acumulado;
            }
    cout<<"El monto final ahorrado es: "<<acumulado<<endl;
    return 0;     
}