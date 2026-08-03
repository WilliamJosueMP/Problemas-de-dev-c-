#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout<<"Ingrese el numero de filas: ";
    cin>>n;
    cout<<"Ingrese el numero de columnas: ";
    cin>>m;
    int K[100][100];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<"Ingrese el valor de K["<<i<<"]["<<j<<"]: ";
            cin>>K[i][j];
            }
    }
    cout<<"\nLa Matriz principal es: "<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<K[i][j]<<" ";
            }
        cout<<endl;
        }
    cout<<"\nLa Matriz Transversal es: "<<endl;
    for (int j=0; j<n; j++){
        for (int i=0; i<m; i++){
            cout<<K[i][j]<<" ";
            }
        cout<<endl;
        }
    return 0; 
}
    