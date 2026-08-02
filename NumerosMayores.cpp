#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    int MAX;
    cout<<"Ingresa el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;
    cout<<"Ingrese el valor de c: ";
    cin>>c;
    MAX = a;
    if(b > MAX){
           MAX = b;
           }
    if(c > MAX){
           MAX = c;
           }
    cout << "\nEl mayor valor es: " << MAX << endl;
    return 0;
}