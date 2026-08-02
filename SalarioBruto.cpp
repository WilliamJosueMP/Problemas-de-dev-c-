#include <iostream>
using namespace std;
int main(){
    int ht, ph;
    int sb, dp, pf;
    cout<<"Ingrese el valor de ht: ";
    cin>> ht;
    cout<<"Ingrese el valor de ph: ";
    cin>>ph;
    sb = ht * ph;
    dp = (sb * 0.08);
    pf = sb - dp;
    cout<<"El sueldo bruto es: "<<sb<<endl;
    cout<<"El descuento es: "<<dp<<endl;
    cout<<"El pago final es: "<<pf<<endl;
    return 0;
}