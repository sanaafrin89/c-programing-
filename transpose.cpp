#include <iostream>
using namespace std;

int main() {

    int A[2][2];
    int AT[2][2];
    int sum[2][2];
    int X[2][2];

    // Input A
    cout << "Enter matrix A:\n";
    for (int i = 0; i < 2; i=i+1) {
        for (int j = 0; j < 2; j=j+1) {
            cin >> A[i][j];
        }
    }

    // Transpose A -> AT
    for (int i = 0; i < 2; i=i+1) {
        for (int j = 0; j < 2; j=j+1) {
            AT[j][i] = A[i][j];
        }
    }

    // sum = A + AT
    for (int i = 0; i < 2; i=i+1) {
        for (int j = 0; j < 2; j=j+1) {
            sum[i][j] = A[i][j] + AT[i][j];
        }
    }

    // (A + AT)^T + (AT)^T
    for (int i = 0; i < 2; i=i+1) {
        for (int j = 0; j < 2; j=j+1) {
            X[i][j] = sum[j][i] + A[i][j];
        }
    }

    // Output X
    cout << "Resultant matrix X:\n";
    for (int i = 0; i < 2; i=i+1) {
        for (int j = 0; j < 2; j=j+1) {
            cout << X[i][j] << " ";
        }

    }

    return 0;
}
