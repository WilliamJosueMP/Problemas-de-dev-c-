#include <iostream>
using namespace std;

int main() {
    int A[3];

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese numero " << (i + 1) << ": ";
        cin >> A[i];
        A[i] = A[i] + 1; 
    }

    cout << "\n--- LISTA FINAL ---" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Resultado: " << A[i] << endl;
    }

    return 0;
}
