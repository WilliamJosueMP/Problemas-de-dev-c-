#include <iostream>
using namespace std;
int main(){
    int A[10];
    int S;
    S = 0;
    for(int i=0; i<10; i++){
            cout<<"El valor de A["<<i<<"] : ";
            cin>>A[i];
            S=A[i]+S;
            }
    cout<<"La sumatoria Final es: "<<S<<endl;
    return 0;     
}