#include <iostream>
#include <string>
using namespace std;
int main(){
    struct Persona{
           string nombre;
           string DNI;
           double edad;
           };
    
    int n;
    int S=0;
    double prom;
    Persona Persona[100];
    cout<<"Coloque el numero de personas: ";
    cin>>n;
    cin.ignore();
    
    for (int i=0; i<n; i++){
        cout<<"\nPersona"<<i+1<<endl;
        cout<<"Nombre: ";
        getline(cin, Persona[i].nombre);
        cout<<"DNI: ";
        getline(cin, Persona[i].DNI);
        cout<<"Edad: ";
        cin>>Persona[i].edad;
        cin.ignore();
        }
     
     cout << "\n=====================================\n";
     cout << "      REGISTRO DE PERSONAS\n";
     cout << "=====================================\n";
     for (int i=0; i<n; i++){
        cout<<"\nPersona"<<i+1<<endl;
        cout<<"Nombre: "<<Persona[i].nombre<<endl;
        cout<<"DNI: "<<Persona[i].DNI<<endl;
        cout<<"Edad: "<<Persona[i].edad<<endl;
        }

    for (int i=0; i<n; i++){
        S = S+Persona[i].edad;
        }
    prom=S/n;
    cout<<"\nEl promedio de edad es: "<<prom<<endl;
    
    for (int i=0; i<n; i++){
        if (Persona[i].edad>50){
            cout<<"\nLa persona mayor a 50 años es: "<<Persona[i].nombre<<endl;
            }
        }
    return 0;
}