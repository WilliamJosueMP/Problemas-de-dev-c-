#include <iostream>
using namespace std;
int main(){
    float N[100];
    int i;
    i=0;
    bool continuar=true;
    while(continuar){
          cout<<"Ingrese el valor de N["<<i<<"]: ";
          cin>>N[i];
          if(N[i]<0){
                    cout<<"Se ha ingresado un valor negativo, el programa se detendra."<<endl;
                    continuar=false;
                    }
          i=i+1;
          }
    return 0;
}
    