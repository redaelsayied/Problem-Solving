#include <iostream>

using namespace std;

void receiveAnArray(int size, int array[]) {
    for (int i = 0; i < size; i++)
        cin >> array[i];
}


void printArray(int size, int array[]) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

}

void combineTwoArrays(int newArray[], const int array2[], const int array1[], int size) {
    for (int i = 0; i < size; i++)
        newArray[i] = array2[i];

    for (int i = size; i < 2 * size; i++)
        newArray[i] = array1[i - size];

}

int main() {
    int size;
    cin >> size;

    int array1[size];
    int array2[size];

    receiveAnArray(size, array1);
    receiveAnArray(size, array2);

    int newArray[2 * size];

    combineTwoArrays(newArray, array2, array1, size);

    printArray(2 * size, newArray);

    return 0;
}
