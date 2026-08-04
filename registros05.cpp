#include <iostream>
#include <string>
using namespace std;
int main(){
    struct Atletas{
           string nombre;
           string disciplina;
           string pais;
           int medalla;
           };
    
    int n;
    Atletas registro[100];
    cout<<"Ingresa el numeto total de atletas registrados: ";
    cin>>n;
    cin.ignore();
    
    for (int i=0; i<n; i++){
        cout<<"\nAtletas: "<<i+1<<endl;
        cout<<"Nombre: ";
        getline(cin, registro[i].nombre);
        cout<<"Disciplina: ";
        getline(cin, registro[i].disciplina);
        cout<<"Pais: ";
        getline(cin, registro[i].pais);
        cout<<"EL numero de Medallas es: ";
        cin>>registro[i].medalla; 
        cin.ignore();
        }
    
    cout<<"\n---LISTADO DE ATLETAS---\n";
    for (int i=0; i<n; i++){
        cout<<"\nAtletas: "<<i+1;
        cout<<"Nombre: "<<registro[i].nombre<<endl;
        cout<<"Disciplina: "<<registro[i].disciplina<<endl;
        cout<<"Pais: "<<registro[i].pais<<endl;
        cout<<"El numero de Medallas es: "<<registro[i].medalla<<endl;
        }
    string pais;
    cout<<"\nIngrese un pais: ";
    getline(cin, pais);
    int MAX=-1;
    string nombreMAX;
    bool encontrar=false;
    for(int i=0; i<n; i++){
        if(pais == registro[i].pais){
            cout<<"El Atleta registrado en "<<registro[i].pais<<" es: "<<registro[i].nombre<<" con "<<registro[i].medalla<<" medallas."<<endl;
            encontrar = true;
            if(registro[i].medalla > MAX){
                MAX = registro[i].medalla;
                nombreMAX = registro[i].nombre;
            }
        }
    }

    if(encontrar == true){
        cout<<"\nEl atleta con mas medallas de "<<pais<<" es: "
            <<nombreMAX<<" con "<<MAX<<" medallas."<<endl;
    }
    else{
        cout<<"\nPais no encontrado."<<endl;
    }

    return 0;
}