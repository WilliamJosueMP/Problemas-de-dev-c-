#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Establece el tamaño del arreglo: ";
    cin>>n;
    int E[n];
    float prom;
    float S;
    S=0;
    int i;
    i=0;
    while (i<n){
          i = i+1;
          cout<<"Ingrese la talla del E["<<i<<"]: ";
          cin>>E[i];
          S= S+E[i];
          }
    prom = S/n;
    cout<<"El Promedio Final de Tallas es: "<<prom<<endl;
    return 0;
}
