#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int arraySize;
    int maxValue;

    cin >> arraySize;
    cin >> maxValue;

    int array[arraySize];
    long long freqArray[maxValue + 1] = {0};

    for (int i = 0; i < arraySize; i++) {
        cin >> array[i];
        freqArray[array[i]]++;
    }


    for (int i = 1; i <= maxValue; i++)
        cout << freqArray[i] << endl;

    return 0;
}

