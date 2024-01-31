#include <iostream>

using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

void receiveAnArray(int size, int array[]) {
    for (int i = 0; i < size; i++)
        cin >> array[i];
}

int main() {
    int size;
    cin >> size;

    int array[size];

    receiveAnArray(size, array);

    selectionSort(array, size);


    int count = 0;
    int current;

    if (size > 0) {
        current = array[0];
        count++;
    }

    for (int i = 1; i < size; i++)
        if (current < array[i]) {
            count++;
            current = array[i];
        }

    cout << count;


    return 0;
}

