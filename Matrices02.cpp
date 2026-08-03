#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"Agrega el numero de elemnetos de la fila: ";
    cin>>n;
    cout<<"Agrega el numero de elementos de la columna: ";
    cin>>m;
    int Id[100][100];
    int S=0;
    for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                    cout<<"Coloca el valor de Id["<<i<<"]["<<j<<"] ";
                    cin>>Id[i][j];
                    }
            }
    for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                    S=S+Id[i][j];
                    }
            }
    cout<<"\nLa Matriz Principal es: "<<endl;
    for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                    cout<<Id[i][j]<<" ";
                    }
            cout<<endl;
            }
    cout<<"La sumatoria Final es : "<<S<<endl;
    return 0;
}