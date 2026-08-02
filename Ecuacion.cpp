#include <iostream>
using namespace std;
int main(){
    int y;
    int x;
    cout<<"Ingrese el valor de y: ";
    cin>>y;
    if(y>=0 && y<=10){
            x = (4/y)-y;
            cout<<"\nEl valor de x es: "<<x<<endl;
            }
            else {
                 if(y>11 && y<=25){
                         x = (y*y*y)-12;
                         cout<<"\nEl valor de x es: "<<x<<endl;
                         }
                         else{
                              if(y>25 && y<=50){
                                      x = (y*y) + (y*y*y) - 18;
                                      cout<<"\nEl valor de x es: "<<x<<endl;
                                      }
                                      else{
                                           x = 0;
                                           cout<<"\nEl valor de x es: "<<x<<endl;
                                           }
                              }
                 }
    return 0;
}