#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>n;
    int A[n];
    int S;
    S = 0;
    for(int i=0; i<n; i++){
            cout<<"El valor de A["<<i<<"] : ";
            cin>>A[i];
            if(A[i]%2==0){
                          S = A[i]+S;
                          }
                          else {
                               A[i] = 0;
                               }
            }
    cout<<"La sumatoria es: "<<S<<endl;
    return 0;     
}