#include <iostream>
using namespace std;

void restaMayormenor(int val1, int val2);
int producto(int val1, int val2);
int suma(int val1, int val2);
void division(int val1, int val2);

int main() { 
    int num1, num2, resultado1, resultado2;
    
    cout << "Ingrese el primer numero: "; cin >> num1;
    cout << "Ingrese el segundo numero: "; cin >> num2;

    restaMayormenor(num1, num2);
    
    division(num1,num2);
    resultado1 = suma(num1, num2);
    cout<<"\nLa sumatoria de "<<num1 << "+" << num2<< "es igual a :" << resultado1;
    resultado2 = producto(num1, num2);
    cout << "\nLa multiplicacion de " << num1 << "*" << num2 << " es: " << resultado2;
    
    return 0;
}

void restaMayormenor(int val1, int val2) {
    int sustrac; 
    if(val1<val2){
                  sustrac=val2-val1;
                  cout << "\nLa resta de " << val2 << "-" << val1 << " es: " << sustrac;
                  }
                  else {
                       sustrac=val1-val2;
                       cout<<"\nLa resta de "<< val1<<"-"<<val2<<"es:"<<sustrac;
                       }
}

int producto(int val1, int val2) {
    int prod; 
    prod = val1 * val2;
    return(prod);
}

int suma(int val1, int val2) {
    int sumatoria;
    sumatoria =val1+val2;
    return(sumatoria);
}

void division(int val1, int val2){
     double division;
     if(val1<val2){
                   division=val2/val1;
                   if(val2%val1==0){
                                    cout<<"\nEl cociente de "<<val2<<"/"<<val1<<"es"<<division;
                                    }
                                    else {
                                         if (val2%val1!=0){
                                                           cout<<"\nError del Programa";
                                                           }
                                         }
                            }
                            else {
                                 if(val1>val2){
                                               division=val1/val2;
                                               if(val1%val2==0){
                                                                cout<<"\nEl cociente de "<<val1<<"/"<<val2<<"es"<<division;
                                                                }
                                                                else {
                                                                     if (val1%val2!=0){
                                                                                       cout<<"\nError del Programa";
                                                                                       }
                                                                     }
                                                } 
                                            }
}