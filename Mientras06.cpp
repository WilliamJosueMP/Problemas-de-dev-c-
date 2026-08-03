#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Establecer el tamaño del arreglo: ";
    cin>>n;
    int B[n];
    int Sp;
    Sp=0;
    int Si;
    Si=0;
    int promP;
    int promI;
    int i;
    i=0;
    int Pares;
    Pares=0;
    int Impares;
    Impares=0;
    while(i<n){
               cout<<"Agrega el valor de B["<<i<<"]: ";
               cin>>B[i];
               if(B[i]%2==0){
                             Sp=B[i]+Sp;
                             Pares=Pares+1;
                             }
                             else {
                                  if(B[i]%2!=0){
                                                Si=B[i]+Si;
                                                Impares=Impares+1;
                                                }
                                  }
            i = i + 1; 
    }

    if (Pares > 0) {
        promP = (float)Sp / Pares;
        cout << "El promedio de los numeros pares es: " << promP << endl;
    } else {
        cout << "No se ingresaron numeros pares." << endl;
    }

    if (Impares > 0) {
        promI = (float)Si / Impares;
        cout << "El promedio de los numeros impares es: " << promI << endl;
    } else {
        cout << "No se ingresaron numeros impares." << endl;
    }
}