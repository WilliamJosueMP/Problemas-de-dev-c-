#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de m: ";
    cin >> m;
    int Id[100][100]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Ingrese el valor de Id[" << i << "][" << j << "]: ";
            cin >> Id[i][j];
            }
        }
    cout << "\nMatriz Identidad:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << Id[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}