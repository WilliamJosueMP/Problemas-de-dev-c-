#include <iostream>
using namespace std;
int main(){
    int n, m, p;
    cout<<"Ingresa el numero de la filas de A: ";
    cin>>n;
    cout<<"Ingrese el numero de columnas de A/filas de B: ";
    cin>>m;
    cout<<"Ingrese el numero de columnas de B: ";
    cin>>p;
    int A[100][100];
    int B[100][100];
    int C[100][100];
    int prod=C[100][100];
    for (int i=0; i<n; i++){
        for (j=0; j<n; j++){
            cout<<"Ingresa el valor de A["<<i<<"]["<<j<<"]" ;
            cin>>A[i][j];
            }
        }
    cout<<"\nLa Matriz Principal es: "<<endl;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            cout<<A[i][j]<<" ";
            }
        cout<<endl;
        }
    for (i=0; i<m; i++){
        for (j=0; j<p; j++){
            cout<<"Ingresa el valor de B["<<i<<"]["<<j<<"]" ;
            cin>>B[i][j];
            }
        }
    cout<<"\nLa Matriz Secundaria es: "<<endl;
    for (i=0; i<m; i++){
        for (j=0; j<p; j++){
            cout<<A[i][j]<<" ";
            }
        cout<<endl;
        }
    for (i=0; i<m; i++){
        for (j=0; j<p; j++){
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
                }
            }
        }
    cout<<"\nLa Matriz Resultante es :"<<C[i][j]<<endl;
    for (i=0; i<m; i++){
        for (j=0; j<p; j++){
            cout<<C[i][j]<<" ";
            }
           cout<<endl;
        }        
    return 0;
}