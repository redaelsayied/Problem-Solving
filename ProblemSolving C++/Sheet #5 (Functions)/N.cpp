#include <iostream>
#include <vector>

using namespace std;

void receiveAnArray(int size, int array[]) {
    for (int i = 0; i < size; i++)
        cin >> array[i];
}

void shiftLeft(int array[], int size, int k) {
    for (int i = k; i < size - 1; i++)
        array[i] = array[i + 1];
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

}

int main() {
    int size;
    cin >> size;

    int array[size];

    receiveAnArray(size, array);

    int temp = size;

    for (int i = 0; i < size; i++)
        if (array[i] == 0) {
            shiftLeft(array, size, i);
            array[size - 1] = 0;
            size--;
            i--;
        }

    size = temp;
    printArray(array, size);


    return 0;
}

