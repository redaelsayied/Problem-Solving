#include <iostream>

using namespace std;

int *receiveAnArray(int n) {
    int *array = new int[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    return array;
}

void printArray(int *array, int n) {
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";

    cout << endl;
}

int getMaximum(int *array, int n) {
    int max = array[0];
    int maxIndex = 0;

    for (int i = 1; i < n; i++)
        if (array[i] > max) {
            max = array[i];
            maxIndex = i;
        }


    return maxIndex;
}

int getMinimumIndex(int *array, int n) {
    int min = array[0];
    int minimumIndex = 0;

    for (int i = 1; i < n; i++)
        if (array[i] < min) {
            min = array[i];
            minimumIndex = i;

        }

    return minimumIndex;
}

int main() {
    int n;
    cin >> n;

    int *array = receiveAnArray(n);

    int minIndex = getMinimumIndex(array, n);
    int maxIndex = getMaximum(array, n);

    swap(array[minIndex], array[maxIndex]);

    printArray(array, n);

}