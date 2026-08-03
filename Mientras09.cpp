#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingresa el tamaño del arreglo: ";
    cin>>n;
    int N[n];
    int i;
    i=0;
    int date;
    for (int i=0; i<n; i++){
        cout<<"Ingresa el valor de N["<<i<<"]: ";
        cin>>N[i];
    }
    cout<<"Ingresa el valor a buscar: ";
    cin>>date;
    if (date==N[i]){
                  cout<<"El valor encontrado es : "<<date<<endl;
                  }
                  else {
                       if (date!=N[i]){
                       cout<<"El dato no ha sido encontrado "<<endl;
                    }
                }
    return 0;
}