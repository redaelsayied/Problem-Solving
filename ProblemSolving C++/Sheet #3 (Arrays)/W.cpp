#include <iostream>

using namespace std;


int main() {
    int rows, cols;
    cin >> rows >> cols;

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j >= 0; j--)
            cout << matrix[i][j] << " ";

        cout << "\n";
    }


    return 0;
}

