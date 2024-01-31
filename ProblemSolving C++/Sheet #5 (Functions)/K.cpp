#include <iostream>

using namespace std;

void receiveAnArray(int size, int array[]) {
    for (int i = 0; i < size; i++)
        cin >> array[i];
}

void shiftRight(int size, int array[]) {
    int lastElement = array[size - 1];

    for (int i = size - 2; i >= 0; i--)
        array[i + 1] = array[i];

    array[0] = lastElement;
}

void printArray(int size, int array[]) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

}

int main() {
    int size, numberOfShifts;
    cin >> size >> numberOfShifts;

    int array[size];
    receiveAnArray(size, array);

    for (int i = 0; i < numberOfShifts; i++)
        shiftRight(size, array);

    printArray(size, array);

    return 0;
}
