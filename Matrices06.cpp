#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"Ingrese el numero de filas: ";
    cin>>n;
    cout<<"Ingrese el numero de columnas: ";
    cin>>m;
    int A[100][100];
    int B[100][100];
    int C[100][100];
    int D[100][100];
    int S=C[100][100];
    int R=D[100][100];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<"Ingrese el valor de A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
            }
    }
    cout<<"\nLa Matriz principal es: "<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<A[i][j]<<" ";
            }
        cout<<endl;
        }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<"Ingrese el valor de B["<<i<<"]["<<j<<"]: ";
            cin>>B[i][j];
            }
    }
    cout<<"\nLa Matriz Secundaria es: "<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<B[i][j]<<" ";
            }
        cout<<endl;
        }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            S=A[i][j]+B[i][j];
            C[i][j]=A[i][j]+B[i][j];
            cout<<"El valor de C[i][j] es: "<<S<<endl;
            }
        }
    cout<<"\nLa Matriz Resultante es: "<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<C[i][j]<<" ";
            }
        cout<<endl;
        }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            R=A[i][j]-B[i][j];
            D[i][j]=A[i][j]-B[i][j];
            cout<<"El valor de D[i][j] es: "<<R<<endl;
            }
        }
    cout<<"\nLa Matriz Resultante de Resta es: "<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<D[i][j]<<" ";
            }
        cout<<endl;
        }
    return 0;           
}