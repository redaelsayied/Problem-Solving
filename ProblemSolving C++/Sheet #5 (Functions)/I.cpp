#include <iostream>

using namespace std;

void receiveMatrix(int **matrix, int size) {
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> matrix[i][j];
}

void printMatrix(int **matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";

        cout << endl;
    }
}

void replace(int **matrix, int size, int x, int y) {
    int *ptr = matrix[x];
    matrix[x] = matrix[y];
    matrix[y] = ptr;

    for (int i = 0; i < size; i++) {
        swap(matrix[i][x], matrix[i][y]);
    }
}


int main() {

    int **matrix;
    int size;
    cin >> size;

    matrix = new int *[size];

    for (int i = 0; i < size; i++)
        matrix[i] = new int[size];

    int x, y;
    cin >> x >> y;
    x--;
    y--;

    receiveMatrix(matrix, size);
    replace(matrix, size, x, y);
    printMatrix(matrix, size);

    for (int i = 0; i < size; i++)
        delete[] matrix[i];

    delete[] matrix;
    return 0;
}
