#include <iostream>

using namespace std;


int main() {
    int length;
    cin >> length;
    int array[length];
    int minIndex = 0;

    for (int i = 0; i < length; i++) {
        cin >> array[i];
        if (array[i] < array[minIndex])
            minIndex = i;
    }

    cout << array[minIndex] << " " << minIndex + 1;
}