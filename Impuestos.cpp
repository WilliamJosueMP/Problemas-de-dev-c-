#include <iostream>
using namespace std;
int main(){
    int costo;
    int Impuesto;
    cout<<"Ingrese el valor del costo: ";
    cin>>costo;
    if(costo<20){
                 Impuesto = 0;
                 cout<<"\nEl valor del Impuesto es 0: "<<Impuesto<<endl;
                 }
    else{
         if(costo>=20 && costo<=40){
                 Impuesto = (costo *30)/100;
                 cout<<"El valor del impuesto es: "<<Impuesto<<endl;
                 }
                 else{
                      if(costo>=40){
                      Impuesto = (costo *40)/100;
                      cout<<"\nEl valor del impuesto es: "<<Impuesto<<endl;
                     }
                     else{
                           if(costo>500){
                            Impuesto = (costo *50)/100;
                           cout<<"El valor del impuesto es: "<<Impuesto<<endl;
                           }
                           }
                   }
                                         
         }
    return 0;
}