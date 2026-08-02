#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    int Equilatero, Isosceles, Escaleno;
    cout<<"Ingrese la longitud de a: ";
    cin>>a;
    cout<<"Ingrese la longitud de b: ";
    cin>>b;
    cout<<"Ingrese la longitud de c: ";
    cin>>c;
    if(a==b && b==c){
            cout<<"\nEs un Triangulo Equilatero: "<<Equilatero<<endl;
            }
            else {
                 if(a==b && b!=c){
                 cout<<"\nEs un Triangulo Isosceles: "<<Isosceles<<endl;
                 }
                 else {
                      if(a!=b && b!=c){
                      cout<<"\nEs un Triangulo Escaleno: "<<Escaleno<<endl;
                      }
                      }
                 }
    return 0;
}

    