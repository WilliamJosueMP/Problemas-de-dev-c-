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
               i=i+1;
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
               }
    promP=Sp/Pares;
    cout<<"El promedio de los numeros pares es: "<<promP<<endl;
    promI=Si/Impares;
    cout<<"El promedio de los numeros impares es: "<<promI<<endl;
    return 0;
}