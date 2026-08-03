#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout<<"Agrega el numero de elemnetos de la fila: ";
    cin>>n;
    cout<<"Agrega el numero de elementos de la columna: ";
    cin>>m;
    int M[100][100];
    for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                    if(j>=i){
                             M[i][j]=1;
                    }
                    else {
                         M[i][j]=0;
                         }
                    }
            }
    cout<<"\nLa Matriz Triangular es: "<<endl;
    for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                    cout<<M[i][j]<<" ";
                    }
            cout<<endl;
            }
    return 0;
}