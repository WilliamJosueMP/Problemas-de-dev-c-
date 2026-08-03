#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de m: ";
    cin >> m;
    int Id[100][100]; 
    int S=0;
    int i, j;
    int MAX=Id[0][0];
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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (Id[i][j] > MAX) {
                MAX = Id[i][j];
            }
        }
    }
    cout << "\nEl valor maximo de la matriz es: " << MAX << endl;
    return 0;
}