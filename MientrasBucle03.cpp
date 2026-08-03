#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    int M[n]; 
    int i = 0; 
    while (i < n) {
        M[i] = 7 * (i + 1);
        cout << "M(" << i + 1 << "): " << M[i] << endl;
        i = i + 1;
    }

    return 0;
}
    