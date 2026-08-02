#include <iostream>
using namespace std;
int main(){
    float C1, C2, Ep, Tf;
    float Calificacion, Examen, Trabajo , NotaFinal;
    cout<<"Ingrese el puntaje de C1: ";
    cin>>C1;
    cout<<"Ingrese el puntaje de C2: ";
    cin>>C2;
    cout<<"Ingrese el puntaje de Ep: ";
    cin>>Ep;
    cout<<"Ingrese el puntaje de Tf: ";
    cin>>Tf;
    Calificacion = (C1+C2/2) * 0.55;
    Examen = 0.30 * (Ep);
    Trabajo = 0.15 * (Tf);
    NotaFinal = Calificacion + Examen + Trabajo;
    cout<<"\n----Resultado----"<<endl;
    cout<<"Promedio de Calificacion: "<<Calificacion<<endl;
    cout<<"Puntaje Examen: "<<Examen<<endl;
    cout<<"Puntaje Trabajo: "<<Trabajo<<endl;
    cout<<"Calificacion Final: "<<NotaFinal<<endl;
    
    return 0;
}