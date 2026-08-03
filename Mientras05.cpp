#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Establece el tamaño del arreglo: ";
    cin>>n;
    int Z[n];
    int S;
    S=0;
    int prom;
    int i;
    i=0;
    int c;
    c = 0;
    while(i<n){
               cout<<"Introduce el valor de Z["<<i<<"]: ";
               cin>>Z[i];
               if (Z[i]>0){
                           S=S+Z[i];
                           c=c+1;
                           }
                           else {
                                if(Z[i]<0){
                                           Z[i]=0;
                                           }
                                }
                i=i+1;
               }
if (c > 0) {
        prom = S / c; 
        cout << "El promedio Final es: " << prom << endl;
    } 
    else {
        cout << "No se ingresaron numeros positivos." << endl;
    }

    return 0;
}
