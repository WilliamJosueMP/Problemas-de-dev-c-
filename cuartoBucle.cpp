#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>n;
    int A[n];
    int S;
    int prom;
    S = 0;
    for(int i=0; i<n; i++){
            cout<<"El valor de A["<<i<<"] : ";
            cin>>A[i];
            S=A[i]+S;
            }
    prom = S/n;
    cout<<"El promedio Final es: "<<prom<<endl;
    return 0;     
}