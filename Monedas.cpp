#include <iostream>
using namespace std;
int main(){
    int DineroTotal;
    int B200, B100, B50, B20, B10, M5, M2, M1;
    cout<<"Ingrese la cantidad del DineroTotal: ";
    cin>>DineroTotal;
    B200 = DineroTotal/200;
    B100 = DineroTotal%(200)/100;
    B50 = DineroTotal%(100)/50;
    B20 = DineroTotal%(50)/20;
    B10 = DineroTotal%(20)/10;
    M5 = DineroTotal%(10)/5;
    M2 = DineroTotal%(5)/2;
    M1 = DineroTotal%(2);
    cout<<"\n------El resultado es:------ "<<endl;
    cout<<"La cantidad de B200 es: "<<B200<<endl;
    cout<<"La cantidad de B100 es: "<<B100<<endl;
    cout<<"La cantidad de B50 es: "<<B50<<endl;
    cout<<"La cantidad de B20 es: "<<B20<<endl;
    cout<<"La cantidad de B10 es: "<<B10<<endl;
    cout<<"La cantidad de M5 es: "<<M5<<endl;
    cout<<"La cantidad de M2 es: "<<M2<<endl;
    cout<<"La cantidad de M1 es: "<<M1<<endl;
    return 0;
}