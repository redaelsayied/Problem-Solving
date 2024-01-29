#include <iostream>

using namespace std;

int main() {
    int length;
    cin >> length;
    int array[length];

    for (int i = 0; i < length; i++)
        cin >> array[i];

    for (int i = 0; i < length - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < length - 1 - i; j++) {
            if (array[j + 1] < array[j]) {
                swap(array[j + 1], array[j]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    for (int e: array)
        cout << e << " ";
}