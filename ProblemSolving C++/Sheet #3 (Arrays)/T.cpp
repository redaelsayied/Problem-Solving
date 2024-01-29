#include <iostream>
#include <cmath>

using namespace std;


int main() {
    short int n;

    cin >> n;

    int matrix[n][n];

    for (short int i = 0; i < n; i++)
        for (short int j = 0; j < n; j++)
            cin >> matrix[i][j];

    int sumOfPrimaryDiagonal = 0;
    int sumOfSecondaryDiagonal = 0;

    for (short int i = 0; i < n; i++)
        for (short int j = 0; j < n; j++) {
            if (i == j)
                sumOfPrimaryDiagonal += matrix[i][j];
            if (i + j == n - 1)
                sumOfSecondaryDiagonal += matrix[i][j];
        }
    cout << abs(sumOfPrimaryDiagonal - sumOfSecondaryDiagonal);
}